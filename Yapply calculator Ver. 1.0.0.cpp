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
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n! [Code 505]를 실행합니다 !\n\n");
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
		printf("\n다음 중 선택하여 번호를 입력하십시오.\n");
		printf("============================================\n");
		printf("[ 1 ] = Program Start\n");
		printf("[ 2 ] = Program Exit\n"); 
		printf("[ 3 ] = Help?\n");
		printf("============================================\n");
		printf("ㄴ ");
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
		printf("계산에 필요한 숫자의 갯수를 입력하시오.\n");
		printf("ㄴ ");
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
				printf("\n\n\n\n\n\n\n\n\n\n\n\n\n*Error : 잘못된 값을 입력하였습니다*\n");
				printf("******프로그램을 재가동합니다*******\n\n");
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
		printf("**기존 값을 초기화후  재시작합니다**\n");
		j = 20;
		for(i=0; i<j; i++)
		{
			printf(".\n");
		}
		printf("\n"); 
		printf("계산에 필요한 숫자의 갯수를 입력하시오.\n");
		printf("============================================\n");
		printf("ㄴ ");
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
		printf("*Error : 값을 잘못 입력하여 재시작 합니다*\n\n");
		choice = 1;
		goto replay;
	}
	else
	{
		if(c==1)
		{
			help ++;
			printf("*Error : 값을 잘못 입력하여 재시작 합니다*\n\n");
			choice = 1;
			goto replay;
		}
		else
			if(c==2)
			{
				printf("\n\n----------------------------------------------------------------------------------------\n");
				printf("숫자 2개를 입력 하세요.\n");
				printf("ㄴ ");
				scanf("%f",&number[0]);
				printf("> %.2f +  <\n",number[0]);
				printf("ㄴ ");
				scanf("%f",&number[1]);
				printf("> %.2f + %.2f <\n",number[0],number[1]);
				replay = 0;
				printf("----------------------------------------------------------------------------------------\n");
			}
			else
				if(c==3)
				{	
					printf("\n\n----------------------------------------------------------------------------------------\n");
					printf("숫자 3개를 입력 하세요.\n");
					printf("ㄴ ");
					scanf("%f",&number[0]);
					printf("> %.2f +  <\n",number[0]);
					printf("ㄴ ");
					scanf("%f",&number[1]);
					printf("> %.2f + %.2f  <\n",number[0],number[1]);
					printf("ㄴ ");
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
						printf("숫자 4개를 입력 하세요.\n");
						printf("ㄴ ");
						scanf("%f",&number[0]);
						printf("%.2f + \n",number[0]);
						printf("ㄴ ");
						scanf("%f",&number[1]);
						printf("%.2f + %.2f\n",number[0],number[1]);
						printf("ㄴ ");
						scanf("%f",&number[2]);
						printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
						printf("ㄴ ");
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
							printf("숫자 5개를 입력 하세요.\n");
							printf("ㄴ ");
							scanf("%f",&number[0]);
							printf("%.2f + \n",number[0]);
							printf("ㄴ ");
							scanf("%f",&number[1]);
							printf("%.2f + %.2f\n",number[0],number[1]);
							printf("ㄴ ");
							scanf("%f",&number[2]);
							printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
							printf("ㄴ ");
							scanf("%f",&number[3]);
							printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
							printf("ㄴ ");
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
								printf("숫자 6개를 입력 하세요.\n");
								printf("ㄴ ");
								scanf("%f",&number[0]);
								printf("%.2f + \n",number[0]);
								printf("ㄴ ");
								scanf("%f",&number[1]);
								printf("%.2f + %.2f\n",number[0],number[1]);
								printf("ㄴ ");
								scanf("%f",&number[2]);
								printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
								printf("ㄴ ");
								scanf("%f",&number[3]);
								printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
								printf("ㄴ ");
								scanf("%f",&number[4]);
								printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
								printf("ㄴ ");
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
								printf("숫자 7개를 입력 하세요.\n");
								printf("ㄴ ");
								scanf("%f",&number[0]);
								printf("%.2f + \n",number[0]);
								printf("ㄴ ");
								scanf("%f",&number[1]);
								printf("%.2f + %.2f\n",number[0],number[1]);
								printf("ㄴ ");
								scanf("%f",&number[2]);
								printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
								printf("ㄴ ");
								scanf("%f",&number[3]);
								printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
								printf("ㄴ ");
								scanf("%f",&number[4]);
								printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
								printf("ㄴ ");
								scanf("%f",&number[5]);
								printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
								printf("ㄴ ");
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
										printf("숫자 8개를 입력 하세요.\n");
										printf("ㄴ ");
										scanf("%f",&number[0]);
										printf("%.2f + \n",number[0]);
										printf("ㄴ ");
										scanf("%f",&number[1]);
										printf("%.2f + %.2f\n",number[0],number[1]);
										printf("ㄴ ");
										scanf("%f",&number[2]);
										printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
										printf("ㄴ ");
										scanf("%f",&number[3]);
										printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
										printf("ㄴ ");
										scanf("%f",&number[4]);
										printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
										printf("ㄴ ");
										scanf("%f",&number[5]);
										printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
										printf("ㄴ ");
										scanf("%f",&number[6]);
										printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f +%.2f \n",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
										printf("ㄴ ");
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
											printf("숫자 9개를 입력 하세요.\n");
											printf("ㄴ ");
											scanf("%f",&number[0]);
											printf("%.2f + \n",number[0]);
											printf("ㄴ ");
											scanf("%f",&number[1]);
											printf("%.2f + %.2f\n",number[0],number[1]);
											printf("ㄴ ");
											scanf("%f",&number[2]);
											printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
											printf("ㄴ ");
											scanf("%f",&number[3]);
											printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
											printf("ㄴ ");
											scanf("%f",&number[4]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
											printf("ㄴ ");
											scanf("%f",&number[5]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
											printf("ㄴ ");
											scanf("%f",&number[6]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f +%.2f \n",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
											printf("ㄴ ");
											scanf("%f",&number[7]);
											printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7]);
											printf("ㄴ ");
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
												printf("숫자 10개를 입력 하세요.\n");
												printf("ㄴ ");
												scanf("%f",&number[0]);
												printf("%.2f + \n",number[0]);
												printf("ㄴ ");
												scanf("%f",&number[1]);
												printf("%.2f + %.2f\n",number[0],number[1]);
												printf("ㄴ ");
												scanf("%f",&number[2]);
												printf("%.2f + %.2f + %.2f\n",number[0],number[1],number[2]);
												printf("ㄴ ");
												scanf("%f",&number[3]);
												printf("%.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3]);
												printf("ㄴ ");
												scanf("%f",&number[4]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4]);
												printf("ㄴ ");
												scanf("%f",&number[5]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5]);
												printf("ㄴ ");
												scanf("%f",&number[6]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f \n",number[0],number[1],number[2],number[3],number[4],number[5],number[6]);
												printf("ㄴ ");
												scanf("%f",&number[7]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7]);
												printf("ㄴ ");
												scanf("%f",&number[8]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8]);
												printf("ㄴ ");
												scanf("%f",&number[9]);
												printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f\n",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8],number[9]);
												replay = 0;
												printf("----------------------------------------------------------------------------------------\n");
											}
											else
											{
												help ++;
												printf("*Error : 값을 잘못 입력하여 재시작 합니다*\n\n");
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

		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f = %.2f",number[0],number[1],number[0]+number[1]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==3)
	{
		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[0]+number[1]+number[2]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}		
	while (c==4)
	{
		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[0]+number[1]+number[2],number[3]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}	
	while (c==5)
	{
		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[0]+number[1]+number[2]+number[3]+number[4]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==6)
	{
		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==7)
	{
		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]+number[6]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==8)
	{
		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]+number[6]+number[7]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==9)
	{
		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]+number[6]+number[7]+number[8]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	while (c==10)
	{
		printf("결과를 출력합니다.\n");
		printf("ㄴ ");
		printf("%.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f + %.2f = %.2f",number[0],number[1],number[2],number[3],number[4],number[5],number[6],number[7],number[8],number[9],number[0]+number[1]+number[2]+number[3]+number[4]+number[5]+number[6]+number[7]+number[8]+number[9]);
		printf("\n----------------------------------------------------------------------------------------\n");
		goto end;
	}
	end:
	while(replay==0)
	{
		printf("\n\n\n========================================");
		printf("\n다음 중 선택하여 번호를 입력하십시오.\n");
		printf("[ 1 ] = 첫 화면으로 이동.\n");
		printf("[ 2 ] = 프로그램 종료.\n");
		printf("========================================\n");
		printf("ㄴ ");
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
		printf("프로그램을 종료합니다.\n");
		printf("아무 키를 입력하시고 엔터를 눌러주세요.\n");
		printf("ㄴ "); 
		scanf("%d",&dummy);
		goto programdown;
	}
	help:
	while(help == 5)
	{
		help = 0;
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("help?");
		printf("\n[ 10 ] 예");
		printf("\n[ 20 ] 아니오\n");
		printf("ㄴ ");
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
		printf("\n무엇을 도와드릴까요.\n\n");
		printf("[ 1 ] 프로그램 사용법\n");
		printf("[ 2 ] 프로그램 설명\n");
		printf("[ 3 ] 프로그램 명령어 목록\n");
		printf("[ 4 ] 돌아가기\n");
		printf("[ 5 ] :)");
		printf("\n========================================");
		printf("\nㄴ ");
		scanf("%d",&helpcode);
		goto help2;
	}
	help2:
	if(helpcode == 1)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n========================================\n");
		printf("!! 프로그램 사용법 !!\n");
		printf("========================================\n");
		printf("\n\n[ 프로그램을 사용하여 계산하는 방법 ]\n");
		printf("-----------------------------------------------------------\n");
		printf("1. 프로그램 시작 후 첫 화면에서 1을 입력하여 프로그램을 시작합니다.\n");
		printf("2. 계산에 필요한 숫자의 갯수를 1~10중 하나를 선택하여 입력합니다.\n");
		printf("ex) 2 + 2 + 2    <--- 숫자 3개 필요.\n");
		printf("-----------------------------------------------------------\n\n\n");
		printf("[ 명령어를 사용하는 방법 ]\n");
		printf("-----------------------------------------------------------\n");
		printf("명령어를 실행하는 방법은 다음과 같습니다.\n");
		printf("1. 프로그램을 시작후 \"계산에 필요한 숫자의 갯수를 입력하시오.\" ""\n");
		printf("부분에서 명령어 코드를 입력합니다.\n");
		printf("ex)\n ㄴ \"505\"");
		printf("\n-----------------------------------------------------------\n\n\n");
		printf("모두 확인하셨다면 [ 1 ] 을 입력해 주세요.\n");
		printf("ㄴ ");
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
			printf("!! 프로그램 설명 !!\n");
			printf("========================================\n\n\n");
			printf("-----------------------------------------------------------\n");
			printf("이 프로그램은 현재 더하기(plus)기능만 구현되어 있습니다.\n");
			printf("앞으로 더 많은 기능이 추가될 예정입니다.\n\n");
			printf("프로그램을 시작하면 계산에 필요한 값을 입력받고, 소숫점 2자리수까지 계산이 가능하며,\n");
			printf("현재는 변수 float를 사용 중이기에, 숫자의 범위는 약 3.4E-38 ~ 3.4E+38입니다.\n");
			printf("또한 특정 상황을 위한 명령어도 사용할 수 있으며, 방법은 프로그램 사용법에 나와있습니다.\n");
			printf("-----------------------------------------------------------\n");
			printf("모두 확인하셨다면 [ 1 ] 을 입력해 주세요.\n\n\n");
			printf("ㄴ ");
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
				printf("!! 프로그램 명령어 목록 !!\n");
				printf("========================================\n\n\n");
				printf("-----------------------------------------------------------\n");
				printf("[ 505 ] ____ 프로그램 시작 화면으로 이동합니다.\n");
				printf("-----------------------------------------------------------\n\n\n");
				printf("모두 확인하셨다면 [ 1 ] 을 입력해 주세요.\n");
				printf("ㄴ ");
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
						printf("입력 해주세요 [ 1 ] 모두 확인하셨다면.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
						printf("ㄴ ");
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
