#include <iostream>
#include <string>

#define ME(matrix,row,col) (data_##matrix [row*colnum_##matrix + col])

#define EPSILON 0.2

bool are_same(float f1, float f2)
{
    if (f1<EPSILON)
    {
	return f2<EPSILON;
    }
    float diff1=f1/f2 - 1.0;
    float diff2=f2/f1 - 1.0;
    if (diff1<0) diff1=-diff1;
    if (diff2<0) diff2=-diff2;
    float diff=(diff1<diff2)?diff1:diff2;
    return diff<EPSILON;
}

int load_matrix(FILE* in, float* data_x, unsigned colnum_x, unsigned rownum_x)
{
    if (fread(data_x,sizeof(float),rownum_x*colnum_x,in)!=rownum_x*colnum_x) return 1;
    return 0;
}

void e(const char* err)
{
    std::cout<<"Operation failed: "<<err<<std::endl;
}

int main(int argc, char* argv[])
{
    if (argc!=3)
    {
	std::cout
	    <<"Matrix comparator"<<std::endl
	    <<std::endl
	    <<"usage:"<<std::endl
	    <<"comparator filename_of_first_matrix filename_of_second_matrix"<<std::endl
	;
	return 1;
    }
    std::string filename_a(argv[1]);
    std::string filename_b(argv[2]);
    FILE* in=fopen(filename_a.c_str(),"rb");
    if (!in) return 1;
    unsigned colnum_a;
    unsigned rownum_a;
    if(fread(&colnum_a,sizeof(unsigned),1,in)!=1) { e("read dimesion from matrix A"); return 1; }
    if(fread(&rownum_a,sizeof(unsigned),1,in)!=1) { e("read dimesion from matrix A"); return 1; }
    float* data_a=new float[colnum_a*rownum_a];
    if (load_matrix(in,data_a,colnum_a,rownum_a)) { e("load data of matrix A "); std::cout<<rownum_a<<"x"<<colnum_a<<std::endl; return 1; }
    fclose(in);
    in=fopen(filename_b.c_str(),"rb");
    if (!in) return 1;
    unsigned colnum_b;
    unsigned rownum_b;
    if(fread(&colnum_b,sizeof(unsigned),1,in)!=1) { e("read dimesion from matrix B"); return 1; }
    if(fread(&rownum_b,sizeof(unsigned),1,in)!=1) { e("read dimesion from matrix B"); return 1; }
    float* data_b=new float[colnum_b*rownum_b];
    if (load_matrix(in,data_b,colnum_b,rownum_b)) { e("read dimesion from matrix B"); return 1; }
    fclose(in);

    if (colnum_a!=colnum_b || rownum_a!=rownum_b)
    {
	std::cout<<"Incopatible sizes of matrices"<<std::endl;
	return 1;
    }
    float total_diff=0;
    for(unsigned i=0; i<rownum_a; ++i)
    {
	for(unsigned j=0; j<colnum_b; ++j)
	{
	    float diff=ME(a,i,j)-ME(b,i,j);
	    if (diff<0) total_diff-=diff; else total_diff+=diff;
	    if (!are_same(ME(a,i,j),ME(b,i,j)))
	    {
		std::cout<<"NOT SAME"<<std::endl;
		return 1;
	    }
	}
    }
    

    std::cout<<"SAME "<<total_diff<<std::endl;
    return 0;
}
