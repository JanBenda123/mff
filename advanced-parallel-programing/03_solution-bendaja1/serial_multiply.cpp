#include <iostream>
#include <string>

#define ME(matrix,row,col) (data_##matrix [row*colnum_##matrix + col])

int load_matrix(FILE* in, float* data_x, unsigned colnum_x, unsigned rownum_x)
{
    if (fread(data_x,sizeof(float),rownum_x*colnum_x,in)!=rownum_x*colnum_x) return 1;
    return 0;
    for(unsigned row=0;row<rownum_x;++row)
    {
	for(unsigned col=0;col<colnum_x;++col)
	{
	    float f;
	    if(fread(&f,sizeof(float),1,in)!=1) return 1;
	    ME(x,row,col)=f;
	}
    }
    return 0;
}

void transpose_matrix(float* data_s, float* data_d, unsigned colnum_s, unsigned rownum_s)
{
    unsigned colnum_d=rownum_s;
    unsigned rownum_d=colnum_s;
    for(unsigned row=0;row<rownum_s;++row)
    {
	for(unsigned col=0;col<colnum_s;++col)
	{
	    ME(d,col,row)=ME(s,row,col);
	}
    }
    return;
}

int main(int argc, char* argv[])
{
    if (argc!=4)
    {
	std::cout
	    <<"Simple serial matrix multiplier"<<std::endl
	    <<std::endl
	    <<"usage:"<<std::endl
	    <<"multiply filename_of_first_matrix filename_of_second_matrix filename_of_result"<<std::endl
	;
	return 1;
    }
    std::string filename_a(argv[1]);
    std::string filename_b(argv[2]);
    std::string filename_c(argv[3]);
    FILE* out=fopen(filename_c.c_str(),"wb");
    if (!out) return 1;
    FILE* in=fopen(filename_a.c_str(),"rb");
    if (!in) return 1;
    unsigned colnum_a;
    unsigned rownum_a;
    if(fread(&colnum_a,sizeof(unsigned),1,in)!=1) return 1;
    if(fread(&rownum_a,sizeof(unsigned),1,in)!=1) return 1;
    float* data_a=new float[colnum_a*rownum_a];
    if (load_matrix(in,data_a,colnum_a,rownum_a)) return 1;
    fclose(in);
    in=fopen(filename_b.c_str(),"rb");
    if (!in) return 1;
    unsigned colnum_bt;
    unsigned rownum_bt;
    if(fread(&colnum_bt,sizeof(unsigned),1,in)!=1) return 1;
    if(fread(&rownum_bt,sizeof(unsigned),1,in)!=1) return 1;
    float* data_bt=new float[colnum_bt*rownum_bt];
    if (load_matrix(in,data_bt,colnum_bt,rownum_bt)) return 1;
    fclose(in);

    if (colnum_a!=rownum_bt)
    {
	std::cout<<"Incopatible sizes of matrices "<<rownum_a<<"x"<<colnum_a<<" and "<<rownum_bt<<"x"<<colnum_bt<<std::endl;
	return 1;
    }

    unsigned colnum_b=rownum_bt;
    unsigned rownum_b=colnum_bt;
    float* data_b=new float[colnum_b*rownum_b];
    transpose_matrix(data_bt,data_b,colnum_bt,rownum_bt);

    delete[] data_bt;

    unsigned rownum_c=rownum_a;
    unsigned colnum_c=colnum_bt;
    float* data_c=new float[rownum_c*colnum_c];

    for(unsigned i=0; i<rownum_a; ++i)
    {
	for(unsigned j=0; j<colnum_bt; ++j)
	{
	    float res=0;
	    for(unsigned k=0; k<colnum_a; ++k)
	    {
		res+=ME(a,i,k)*ME(b,j,k);
	    }
	    ME(c,i,j)=res;
	}
    }
    

    if (fwrite(&colnum_c,sizeof(unsigned),1,out)!=1) return 1;
    if (fwrite(&rownum_c,sizeof(unsigned),1,out)!=1) return 1;
    if (fwrite(data_c,sizeof(float),colnum_c*rownum_c,out)!=colnum_c*rownum_c) return 1;
    fclose(out);
}
