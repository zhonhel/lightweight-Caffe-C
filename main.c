#include"train.h"
#include"createCNN.h"
int main(int argc,char* argv[])
{
	if (strcmp(argv[1], "train") == 0)
	{
		if (strcmp(argv[2], "-solver") == 0)
		{
			createCNN(argv[3]);
			train();
		}
	}
}