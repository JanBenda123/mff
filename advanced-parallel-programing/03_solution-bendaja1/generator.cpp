#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

template<typename T>
T lexical_cast(const std::string& str)
{
    std::istringstream istr(str);
    T res;
    istr>>res;
    return res;
}

int main(int argc, char* argv[])
{
    if (argc!=5)
    {
	std::cout
	    <<"Matrix generator"<<std::endl
	    <<"generates matrix of specified dimensions based on a seed and stores it in a file"<<std::endl
	    <<std::endl
	    <<"usage:"<<std::endl
	    <<"generator number_of_rows number_of_columns seed output_file_name"<<std::endl
	;
	return 1;
    }
    size_t rownum(lexical_cast<size_t>(std::string(argv[1])));
    size_t colnum(lexical_cast<size_t>(std::string(argv[2])));
    unsigned int seed(lexical_cast<unsigned int>(std::string(argv[3])));
    std::string filename(argv[4]);
    srand(seed);

    FILE* out=fopen(filename.c_str(),"wb");
    if (!out) return 1;
    unsigned colnum_int=static_cast<unsigned>(colnum);
    unsigned rownum_int=static_cast<unsigned>(rownum);
    if (fwrite(&colnum_int,sizeof(unsigned),1,out)!=1) return 1;
    if (fwrite(&rownum_int,sizeof(unsigned),1,out)!=1) return 1;
    for(size_t row=0; row<rownum; ++row)
    {
	for(size_t col=0; col<colnum; ++col)
	{
	    int fi=rand();
	    //float f = static_cast<float>(fi%256);
	    float f=1;
	    if (fi & 0x100) f=-f;
	    //float f = static_cast<float>(row*colnum+col);
	    if (fwrite(&f,sizeof(float),1,out)!=1) return 1;
	}
    }
    fclose(out);
}
