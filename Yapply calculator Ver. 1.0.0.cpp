#include <stdio.h>
int main()
{	
	char yn;
	int help;
	int helpexit;
	int helpcount;
	int i,j,c;
	int choice;
	int helpcode;
	int dummy;
	int replay;
	int programstart;
	int start;
	char starterror;
	char errorcode;
	float number[99];
	code505:
	while(c == 505)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n! [Code 505]�� �����մϴ� !\n\n");
		c == 0;
		goto start;
	}
	start:
	start = 1;
	programstart = 0;
	c = 0;
	help = 0;
	choice = 0;
	helpcode = 0;
	dummy = 0;
	replay = 0;
	starterror = 0;
	
	while(start == 1)
	{
		help = 0;
		printf("Yapply calculator Ver. 1.0.0\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf(".\n");
		printf("\n���� �� �����Ͽ� ��ȣ�� �Է��Ͻʽÿ�.\n");
		printf("============================================\n");
		printf("[ 1 ] = Program Start\n");
		printf("[ 2 ] = Program Exit\n"); 
		printf("[ 3 ] = Help?\n");
		printf("============================================\n");
		printf("�� ");
		scanf("%d,",&programstart);
		goto start2;
	}
	start2:
	if (programstart == 1 )
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("============================================\n");
		printf(".....PROGRAM START.....\n");
		printf("============================================\n");
		printf("��꿡 �ʿ��� ������ ������ �Է��Ͻÿ�.\n");
		printf("�� ");
		scanf("%d",&c);
		goto start3;
	}
	else
	{
		if(programstart == 2)
		{
			errorcode = 1;
			goto error;
		}
		else
		{
			if(programstart == 3)
			{
				helpcount = 10;
				goto help1;
			}
			else
			{
				starterror = 1;
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n*Error : �߸��� ���� �Է��Ͽ����ϴ�*\n");
				printf("******���α׷��� �簡���մϴ�*******\n\n");
				goto starterror;
			}
		}
	}
	replay:
	if(help == 5)
	{
		goto help;
	}
	while(choice==1)
	{
		printf("============================================\n");
		printf("\n");
		printf("\n");
		printf("**���� ���� �ʱ�ȭ��  ������մϴ�**\n");
		j = 20;
		for(i=0; i<j; i++)
		{
			printf(".\n");
		}
		printf("\n"); 
		printf("��꿡 �ʿ��� ������ ������ �Է��Ͻÿ�.\n");
		printf("============================================\n");
		printf("�� ");
		goto restart;
	}
	restart:
	c==0;
	scanf("%d",&c);
	start3:
	while (c == 505)
	{ 
		goto code505;
	}
	if(c==0)
	{
		help ++;
		printf("*Error : ���� �߸� �Է��Ͽ� ����� �մϴ�*\n\n");
		choice = 1;
		goto replay;
	}
	else
	{
		if(c==1)
		{
			help ++;
			printf("*Error : ���� �߸� �Է��Ͽ� ����� �մϴ�*\n\n");
			choice = 1;
			goto replay;
		}
		else
			if(c==2)
			{
				printf("\n\n----------------------------------------------------------------------------------------\n");
				printf("���� 2���� �Է� �ϼ���.\n");
				printf("�� ");
				scanf("%f",&number[0]);
				printf("> %.2f +  <\n",number[0]);
				printf("�� ");
				scanf("%f",&number[1]);
				printf("> %.2f + %.2f <\n",number[0],number[1]);
				replay = 0;
				printf("----------------------------------------------------------------------------------------\n");
			}
			else
				if(c==3)
				{	
					printf("\n\n----------------------------------------------------------------------------------------\n");
					printf("���� 3���� �Է� �ϼ���.\n");
					printf("�� ");
					scanf("%f",&number[0]);
					printf("> %.2f +  <\n",number[0]);
					printf("�� ");
					scanf("%f",&number[1]);
					printf("> %.2f + %.2f  <\n",number[0],number[1]);
					printf("�� ");
					scanf("%f",&number[2]);
					printf("> %.2f + %.2f + %.2f  <\n",number[0],number[1],number[2]);
					replay = 0;
					printf("----------------------------------------------------------------------------------------\n");
				}
				else
				{
					if(c==4)
					{
						printf("\n\n----------------------------------------------------------------------------------------\n");
						printf("���� 4���� �Է� �ϼ���.\n");
						printf("�� ");
						scanf("%f",&number[0]);
						printf("%.2f + \n",number[0]);
						printf("�� ");
						scanf("%f",&number[1]);
						printf("%.2f + %.2f\n",number[0],number[1]);
						printf("�� ");
						scanf("%f",&number[2]);
						printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
						printf("�� ");
						scanf("%f",&number[3]);
						printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
						replay = 0;
						printf("----------------------------------------------------------------------------------------\n");
					}
					else
					{
						if(c==5)
						{
							printf("\n\n----------------------------------------------------------------------------------------\n");
							printf("���� 5���� �Է� �ϼ���.\n");
							printf("�� ");
							scanf("%f",&number[0]);
							printf("%.2f + \n",number[0]);
							printf("�� ");
							scanf("%f",&number[1]);
							printf("%.2f + %.2f\n",number[0],number[1]);
							printf("�� ");
							scanf("%f",&number[2]);
							printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
							printf("�� ");
							scanf("%f",&number[3]);
							printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
							printf("�� ");
							scanf("%f",&number[4]);
							printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
							replay = 0;
							printf("----------------------------------------------------------------------------------------\n");
						}
						else
						{
							if(c==6)
							{
								printf("\n\n----------------------------------------------------------------------------------------\n");
								printf("���� 6���� �Է� �ϼ���.\n");
								printf("�� ");
								scanf("%f",&number[0]);
								printf("%.2f + \n",number[0]);
								printf("�� ");
								scanf("%f",&number[1]);
								printf("%.2f + %.2f\n",number[0],number[1]);
								printf("�� ");
								scanf("%f",&number[2]);
								printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
								printf("�� ");
								scanf("%f",&number[3]);
								printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
								printf("�� ");
								scanf("%f",&number[4]);
								printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
								printf("�� ");
								scanf("%f",&number[5]);
								printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
								replay = 0;
								printf("----------------------------------------------------------------------------------------\n");
							}
							else
							{
								if(c==7)
								{
								printf("\n\n----------------------------------------------------------------------------------------\n");
								printf("���� 7���� �Է� �ϼ���.\n");
								printf("�� ");
								scanf("%f",&number[0]);
								printf("%.2f + \n",number[0]);
								printf("�� ");
								scanf("%f",&number[1]);
								printf("%.2f + %.2f\n",number[0],number[1]);
								printf("�� ");
								scanf("%f",&number[2]);
								printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
								printf("�� ");
								scanf("%f",&number[3]);
								printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
								printf("�� ");
								scanf("%f",&number[4]);
								printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
								printf("�� ");
								scanf("%f",&number[5]);
								printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
								printf("�� ");
								scanf("%f",&number[6]);
								printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f +%.2f \n",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
								replay = 0;
								printf("----------------------------------------------------------------------------------------\n");
								}
								else
								{
									if(c==8)
									{
										printf("\n\n----------------------------------------------------------------------------------------\n");
										printf("���� 8���� �Է� �ϼ���.\n");
										printf("�� ");
										scanf("%f",&number[0]);
										printf("%.2f + \n",number[0]);
										printf("�� ");
										scanf("%f",&number[1]);
										printf("%.2f + %.2f\n",number[0],number[1]);
										printf("�� ");
										scanf("%f",&number[2]);
										printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
										printf("�� ");
										scanf("%f",&number[3]);
										printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
										printf("�� ");
										scanf("%f",&number[4]);
										printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
										printf("�� ");
										scanf("%f",&number[5]);
										printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
										printf("�� ");
										scanf("%f",&number[6]);
										printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f +%.2f \n",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
										printf("�� ");
										scanf("%f",&number[7]);
										printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7]);
										replay = 0;
										printf("----------------------------------------------------------------------------------------\n");
									}
									else
									{
										if(c==9)
										{
											printf("\n\n----------------------------------------------------------------------------------------\n");
											printf("���� 9���� �Է� �ϼ���.\n");
											printf("�� ");
											scanf("%f",&number[0]);
											printf("%.2f + \n",number[0]);
											printf("�� ");
											scanf("%f",&number[1]);
											printf("%.2f + %.2f\n",number[0],number[1]);
											printf("�� ");
											scanf("%f",&number[2]);
											printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
											printf("�� ");
											scanf("%f",&number[3]);
											printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
											printf("�� ");
											scanf("%f",&number[4]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
											printf("�� ");
											scanf("%f",&number[5]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
											printf("�� ");
											scanf("%f",&number[6]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f +%.2f \n",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
											printf("�� ");
											scanf("%f",&number[7]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7]);
											printf("�� ");
											scanf("%f",&number[8]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8]);
											replay = 0;
											printf("----------------------------------------------------------------------------------------\n");
										}
										else
										{
											if(c==10)
											{
												printf("\n\n----------------------------------------------------------------------------------------\n");
												printf("���� 10���� �Է� �ϼ���.\n");
												printf("�� ");
												scanf("%f",&number[0]);
												printf("%.2f + \n",number[0]);
												printf("�� ");
												scanf("%f",&number[1]);
												printf("%.2f + %.2f\n",number[0],number[1]);
												printf("�� ");
												scanf("%f",&number[2]);
												printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
												printf("�� ");
												scanf("%f",&number[3]);
												printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
												printf("�� ");
												scanf("%f",&number[4]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
												printf("�� ");
												scanf("%f",&number[5]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
												printf("�� ");
												scanf("%f",&number[6]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
												printf("�� ");
												scanf("%f",&number[7]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7]);
												printf("�� ");
												scanf("%f",&number[8]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8]);
												printf("�� ");
												scanf("%f",&number[9]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8],number[9]);
												replay = 0;
												printf("----------------------------------------------------------------------------------------\n");
											}
											else
											{
												help ++;
												printf("*Error : ���� �߸� �Է��Ͽ� ����� �մϴ�*\n\n");
												choice = 1;
												goto replay;
											}
										}
									}
								}
							}
						}
					}

				}
	}
	while (c==2)
	{

		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f = %.2f",number[0],number[1],number[0]+number[1]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==3)
	{
		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[0]+number[1]+number[2]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}		
	while (c==4)
	{
		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[0]+number[1]+number[2],number[3]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}	
	while (c==5)
	{
		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[0]+number[1]+number[2]+number[3]+number[4]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==6)
	{
		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==7)
	{
		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]+number[6]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==8)
	{
		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]+number[6]+number[7]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==9)
	{
		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]+number[6]+number[7]+number[8]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==10)
	{
		printf("����� ����մϴ�.\n");
		printf("�� ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8],number[9],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]+number[6]+number[7]+number[8]+number[9]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	end:
	while(replay==0)
	{
		printf("\n\n\n========================================");
		printf("\n���� �� �����Ͽ� ��ȣ�� �Է��Ͻʽÿ�.\n");
		printf("[ 1 ] = ù ȭ������ �̵�.\n");
		printf("[ 2 ] = ���α׷� ����.\n");
		printf("========================================\n");
		printf("�� ");
		scanf("%d", &choice);
		printf("==============================================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		replay ++;
		goto choice;
	}
	choice:
	if(choice==1)
	{
		goto start2;
	}
	else
	{
		goto programdown;
	}
	shotdown:
	j = 5;
	for(i=0; i<j; i++)
	{
		printf("\n");
	} 
	error:
	while(errorcode == 1)
	{
		printf("���α׷��� �����մϴ�.\n");
		printf("�ƹ� Ű�� �Է��Ͻð� ���͸� �����ּ���.\n");
		printf("�� "); 
		scanf("%d",&dummy);
		goto programdown;
	}
	help:
	while(help == 5)
	{
		help = 0;
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("help?");
		printf("\n[ 10 ] ��");
		printf("\n[ 20 ] �ƴϿ�\n");
		printf("�� ");
		scanf("%d",&helpcount);
	}
	while(helpcount == 10)
	{
		goto help1;
	}
	if(helpcount == 20)
	{
		goto start2;
	}
	else
	{
		help = 5;
		goto help;
	}
	help1:
	while(helpcount == 10)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n========================================");
		printf("\n������ ���͵帱���.\n\n");
		printf("[ 1 ] ���α׷� ����\n");
		printf("[ 2 ] ���α׷� ����\n");
		printf("[ 3 ] ���α׷� ��ɾ� ���\n");
		printf("[ 4 ] ���ư���\n");
		printf("[ 5 ] :)");
		printf("\n========================================");
		printf("\n�� ");
		scanf("%d",&helpcode);
		goto help2;
	}
	help2:
	if(helpcode == 1)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n========================================\n");
		printf("!! ���α׷� ���� !!\n");
		printf("========================================\n");
		printf("\n\n[ ���α׷��� ����Ͽ� ����ϴ� ��� ]\n");
		printf("-----------------------------------------------------------\n");
		printf("1. ���α׷� ���� �� ù ȭ�鿡�� 1�� �Է��Ͽ� ���α׷��� �����մϴ�.\n");
		printf("2. ��꿡 �ʿ��� ������ ������ 1~10�� �ϳ��� �����Ͽ� �Է��մϴ�.\n");
		printf("ex) 2 + 2 + 2    <--- ���� 3�� �ʿ�.\n");
		printf("-----------------------------------------------------------\n\n\n");
		printf("[ ��ɾ ����ϴ� ��� ]\n");
		printf("-----------------------------------------------------------\n");
		printf("��ɾ �����ϴ� ����� ������ �����ϴ�.\n");
		printf("1. ���α׷��� ������ \"��꿡 �ʿ��� ������ ������ �Է��Ͻÿ�.\" ""\n");
		printf("�κп��� ��ɾ� �ڵ带 �Է��մϴ�.\n");
		printf("ex)\n �� \"505\"");
		printf("\n-----------------------------------------------------------\n\n\n");
		printf("��� Ȯ���ϼ̴ٸ� [ 1 ] �� �Է��� �ּ���.\n");
		printf("�� ");
		scanf("%d",&helpexit);
		if(helpexit == 1)
		{
			helpcode = 10;
			goto help1;
		}
		else
		{
			goto help2;
		}
	}
	else
	{
		if(helpcode == 2)
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n========================================\n");
			printf("!! ���α׷� ���� !!\n");
			printf("========================================\n\n\n");
			printf("-----------------------------------------------------------\n");
			printf("�� ���α׷��� ���� ���ϱ�(plus)��ɸ� �����Ǿ� �ֽ��ϴ�.\n");
			printf("������ �� ���� ����� �߰��� �����Դϴ�.\n\n");
			printf("���α׷��� �����ϸ� ��꿡 �ʿ��� ���� �Է¹ް�, �Ҽ��� 2�ڸ������� ����� �����ϸ�,\n");
			printf("����� ���� float�� ��� ���̱⿡, ������ ������ �� 3.4E-38 ~ 3.4E+38�Դϴ�.\n");
			printf("���� Ư�� ��Ȳ�� ���� ��ɾ ����� �� ������, ����� ���α׷� ������ �����ֽ��ϴ�.\n");
			printf("-----------------------------------------------------------\n");
			printf("��� Ȯ���ϼ̴ٸ� [ 1 ] �� �Է��� �ּ���.\n\n\n");
			printf("�� ");
			scanf("%d",&helpexit);
			if(helpexit == 1)
			{
				helpcode = 10;
				goto help1;
			}
			else
			{
				goto help2;
			}
		}
		else
		{
			if(helpcode == 3)
			{
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n========================================\n");
				printf("!! ���α׷� ��ɾ� ��� !!\n");
				printf("========================================\n\n\n");
				printf("-----------------------------------------------------------\n");
				printf("[ 505 ] ____ ���α׷� ���� ȭ������ �̵��մϴ�.\n");
				printf("-----------------------------------------------------------\n\n\n");
				printf("��� Ȯ���ϼ̴ٸ� [ 1 ] �� �Է��� �ּ���.\n");
				printf("�� ");
				scanf("%d",&helpexit);
				if(helpexit == 1)
				{
					helpcode = 10;
					goto help1;
				}
				else
				{
					goto help2;
				}
			}
			else
			{
				if(helpcode == 4)
				{
					printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
					helpcode = 0;
					goto start;
				}
				else
				{
					if(helpcode == 5)
					{
						printf("\n\n\n\n\n\n\n\n\n\n\n========================================\n");
						printf("|+_|\| Easter egg |+_|\|\n");
						printf("========================================\n");
						printf("[ Program Completion Date ] _ 2023.05.22\n");
						printf("[ Program Ver ] _ 1.0.0\n");
						printf("[ Required Period ] _ 3_day\n");
						printf("[ Plan ] _ Yoon Jiwon\n");
						printf("[ Develop ] _ Yoon Jiwon\n\n\n");
						printf("�Է� ���ּ��� [ 1 ] ��� Ȯ���ϼ̴ٸ�.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
						printf("�� ");
						scanf("%d",&helpexit);
						if(helpexit == 1)
						{
							helpcode = 10;
							goto help1;
						}
						else
						{
							goto help2;
						}
					}
					else
					{
						helpcode = 1;
						goto help1;
					}
				}
			}
		}
	}
	starterror:
	while(starterror == 1)
	{
		goto start;
	}
	programdown:
	return 0;
}
