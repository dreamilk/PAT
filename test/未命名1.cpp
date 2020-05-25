#include <iostream>

void ** fspace_2d(int row,int col,int lenth)
{
	void **b = (void **)calloc(sizeof(void *),row);
	char *p = (char *)calloc(lenth, row*col);
	for(int i=0;i<row;i++)
		b[i] = (void*) (p + i*col*lenth);
	return(b);
}

void ffree_2d(void **a,int row)
{

	free(a);
					free(*a);

}

int main()
{
	int r=5, c = 3;
	float ** pArray2D  = (float **) fspace_2d(r, c, sizeof(float) );
	
	ffree_2d( (void**) pArray2D, r);
}
