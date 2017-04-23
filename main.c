#include"genCNN.h"
#include"train.h"

int main(int argc,char* argv[])
{
	if (strcmp(argv[1], "train") == 0)
	{
		if (strcmp(argv[2], "-solver") == 0)
		{
			genCNN(argv[3]);
			train();
		}
	}
}