#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>
#include "..//lib//time.h"
#include "..///lib//data.h" 
	
int main(){
int i = 1;
	int prompt;
	int view;
	int avail=1;
	int nvail = 0;
	 int num_of_stud=0;
	char a[40];
	char av[30]="Available";
	char nav[30]="Not Avaialable";
	system("cls");	

	header();
	

	FILE *fp = fopen("stud.txt","aw+");
	
	if(i!=0){
		mn:
		system("cls");		// clean the screen
				
		header();		// screen menu
		
printf("\t\t::");		printf("\t1 - Add a new Student\t\t\t\t\t::\n\t\t::\t2 - View List of registered Students\t\t\t::\n\t\t::\t3 - Blacklist a student\t\t\t\t\t::\n\t\t::\t4 - Recover a Student\t\t\t\t\t::\n\t\t::\t5 - Search for a Student\t\t\t\t::\n\t\t::\t6 - Remove Student\t\t\t\t\t::\n\t\t::\t7 -  Group Members\t\t\t\t\t::\n\t\t::\t0 - Exit\t\t\t\t\t\t::\n\t\t::\n");
		printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");	
		printf("\n Enter your Choice: ");
		scanf("%d",&prompt);
	
		switch(prompt){
			case 1:{
					system("cls");		// clean the screen					
					header();		// screen menu
					system("color 6");
					
						printf("\t\t\t\t - Regitsration of a Student -\n\n\n");
					
					if(fp==NULL){
							printf("Error opening file");
							exit(1);
						}
					addStudent(fp);
					
						fclose(fp);
						//	delay();
							
					//	system("pause.bat");
					  //  goto mn;
					  
				break;
			}
				
				case 2:{
				system("cls");
				header();
				system("color 3");
			
				printf("\t1 - By Department\n\t2 - By Block\n\t3 -By Academic Year\n\n");
				
					scanf("%d",&view);
				switch(view){
					case 1:{
						system("cls");
						header();
						system("color 3");
						
							printf("\t\t\t\t  List of Registered Students\n");
							printf("\t\t\t\t\t-- By Department--\n");
							
						FILE *op = fopen("stud.txt","r");
						FILE *Mp = fopen("stud.txt","r");
						FILE *Sp = fopen("stud.txt","r");
						FILE *ch = fopen("stud.txt","r");
						
							if(op==NULL){
								printf("Error reading file");
								return 1;
							}
								if(Mp==NULL){
								 printf("Error reading file");
								 return 1;
							}
							
							if(Sp==NULL){
								printf("Error reading file");
								return 1;
							}
							if(ch==NULL){
								printf("Error reading file");
								return 1;
							}
								viewByDepartment(op,Mp,Sp,ch);	
								
							fclose(op);
							fclose(Mp);
							fclose(Sp);
							fclose(ch);
						
						break;										
					}
					
					// CASE 2  //////////////////
					case 2:{
						system("cls");
						header();
						system("color 3");
						
							printf("\t\t\t\t  List of Registered Students\n");
							printf("\t\t\t\t\t-- By Block --\n");
	
						
				FILE *bp = fopen("stud.txt","r");
				FILE *bp2 = fopen("stud.txt","r");
				FILE *bp3 = fopen("stud.txt","r");
				FILE *bp4 = fopen("stud.txt","r");
				
					if(bp==NULL){
					printf("Error reading file");
					return 1;
				}
					if(bp2==NULL){
					printf("Error reading file");
					return 1;
				}
					if(bp3==NULL){
					printf("Error reading file");
					return 1;
				}
					if(bp4==NULL){
					printf("Error reading file");
					return 1;
				}
				
				viewByBlock(bp,bp2,bp3,bp4);
				
				 fclose(bp);
			     fclose(bp2);
			     fclose(bp3);
				 fclose(bp4);			     
			     
					
						break;										
					}
					
					case 3:{
						system("cls");
						header();
						system("color 3");
						
							printf("\t\t\t\t  List of Registered Students\n");
							printf("\t\t\t\t\t-- By Academic Year --\n");
				
						
				FILE *yp = fopen("stud.txt","r");
				FILE *yp2 = fopen("stud.txt","r");
				FILE *yp3 = fopen("stud.txt","r");
				FILE *yp4 = fopen("stud.txt","r");
				FILE *yp5 = fopen("stud.txt","r");
				
					if(yp==NULL){
						printf("Error reading file");
						return 1;
					}
					if(yp2==NULL){
						printf("Error reading file");
						return 1;
					}
					if(yp3==NULL){
						printf("Error reading file");
						return 1;
					}	
					if(yp4==NULL){
						printf("Error reading file");
						return 1;
					}
					if(yp5==NULL){
						printf("Error reading file");
						return 1;
					}	
					
					viewByAcademicYear(yp,yp2,yp3,yp4,yp5);
				
				fclose(yp);
				fclose(yp2); 	
				fclose(yp3);
			    fclose(yp4);
			    fclose(yp5);			     		     
		
						break;										
					}				
					
				}
				printf("\n");
				printf("=============================================================\n");
				gn:	system("pause.bat");
						goto mn;
				break;
			}
			
			case 3:{
				system("cls");
				header();
				system("color 6");
				
				int blki;
				int incr=0;
				
				printf("\n\t\t\t************ -BlackList a Student- ************\n\n\n");
				printf("Enter the id of the student you want to BlackList: ");
				scanf("%d",&blki);
				
				FILE *rm = fopen("stud.txt","r");
				FILE *rm2 = fopen("student2_temo.txt","w");
				
				if(rm==NULL){
					printf("Error reading file");
					return 1;
				}
				  fscanf(rm,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
					
					while(3){
							int cnt =fscanf(rm,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.id!=blki){
								fprintf(rm2,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,stud.available);					
						}
								if(stud.id==blki){
									incr++;
									if(stud.available==0){
										printf("\nStudent is already in BlackList!\nExiting...");
										exit(1);
									}
									fprintf(rm2,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nvail);
								}
					}
			     fclose(rm);
				 fclose(rm2);
				 
						 if(incr==0){
						 	printf("\nThere is no Student with given ID!\n");
						 	goto k;
						 }
					// Writing again to the same File
						 
					FILE *rm3 = fopen("stud.txt","w");
				FILE *rm4 = fopen("student2_temo.txt","r"); 
					if(rm3==NULL){
					printf("Error reading file");
					return 1;
				}
						fprintf(rm3,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n","Name","ID","Department","Year","Sex","Block","Available");
					while(3){
							int cnt =fscanf(rm4,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  
								fprintf(rm3,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,stud.available);					
						
					}
			    
				 
				 printf("\nStudent has been successfully added to BlackList!\n");
				  fclose(rm3);
				 fclose(rm4);				
				
				k:
				system("pause.bat");
				goto mn;
				break;	 
			}
	
				case 4:{
				system("cls");
				header();
				system("color 6");
				
				int recid;
				int incr=0;
				
				printf("\n\t\t================== Recover a student from Blacklist ===============\n\n");
				printf("Enter the id of the student you want to remove from blacklist: ");
				scanf("%d",&recid);
				
				FILE *rm = fopen("stud.txt","r");
				FILE *rm2 = fopen("student2_temo.txt","w");
				
				
				if(rm==NULL){
					printf("Error reading file");
					return 1;
				}
				  fscanf(rm,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
					
					while(3){
							int cnt =fscanf(rm,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.id!=recid){
								fprintf(rm2,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,stud.available);					
						}
								if(stud.id==recid){
									incr++;
									if(stud.available==1){
										printf("\n Student is not in the black list!\nExiting...");
										exit(1);
									}
									fprintf(rm2,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,avail);
								}
					}
			     fclose(rm);
				 fclose(rm2);
				
						 if(incr==0){
						 	printf("\n============================There is no Student with given ID!============================\n\n");
						 }
					// Writing again to the same File
						 
					FILE *rm3 = fopen("stud.txt","w");
				FILE *rm4 = fopen("student2_temo.txt","r"); 
					if(rm3==NULL){
					printf("Error reading file");
					return 1;
				}
						fprintf(rm3,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n","Name","ID","Department","Year","Sex","Block","Available");
					while(3){
							int cnt =fscanf(rm4,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
		
								fprintf(rm3,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,stud.available);					
						
					}
			     
				 printf("\nStudent has been successfully removed from BlackList!\n");

				 fclose(rm3);
				 fclose(rm4);
				 							
					system("pause.bat");
					goto mn;	
				break;
			}		
				case 5:{
				system("cls");
				header();
				system("color 6");
				
				int ID;
				
				printf("\n\t\t\t************Search For a Student************\n\n\n");
				printf("Enter the id of the student you want to Search: ");
				scanf("%d",&ID);
				
					FILE *sear = fopen("stud.txt","r");
				
					if(sear==NULL){
					printf("Error reading file");
					return 1;
				}
				  	search(sear,ID);
				  
			     fclose(sear);	
							
					system("pause.bat");
					goto mn;			
				break;
			}
			
			case 6:{
				
				system("cls");
				header();
				system("color 4");
				int rem;
				
				printf("\n\t************Remove a Student************\n\n\n");
				printf("Enter the id of the student you want to remove: ");
				scanf("%d",&rem);
				int coun=0;
				FILE *rm = fopen("stud.txt","r");
				FILE *rm2 = fopen("student2_temo.txt","w");
				
				
				if(rm==NULL){
					printf("Error reading file");
					return 1;
				}
				  fscanf(rm,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
					
					while(3){
							int cnt =fscanf(rm,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.id!=rem){
								fprintf(rm2,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,avail);					
						}
								if(stud.id==rem){
									coun++;
								}
					}
			     fclose(rm);
				 fclose(rm2);
				 if(rm!=NULL){fclose(rm); }	
					 	if(rm2!=NULL){fclose(rm2); }
					 	if(coun==0){
					 		printf("\nThere is no student with the given Id!\n\n");
					 	}
						 
					// Writing again to the same File
						 
					FILE *rm3 = fopen("stud.txt","w");
				FILE *rm4 = fopen("student2_temo.txt","r"); 
					if(rm3==NULL){
					printf("Error reading file");
					return 1;
				}
						fprintf(rm3,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n","Name","ID","Department","Year","Sex","Block","Available");
					while(3){
							int cnt =fscanf(rm4,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
		
									//coun++;
								fprintf(rm3,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,avail);					
						
					}
			     fclose(rm3);
				 fclose(rm4);		
				 printf("\nStudent has been succsessfully Removed!\n");		
				
				system("pause.bat");
						goto mn;
				break;
			}
			
			
			case 7:{
					
				system("cls");
				header();
				system("color 5");
				
				printf("\n\t\t\t===============================Developers===============================\n\n");
				printf("\t\t\t\t1. Samuel Amsalu  ------------------ Id 1036/10\n");
				printf("\t\t\t\t2. Yididya Samuel ------------------ Id 1256/10\n\n");
				printf("\t\t\t===========================================================================\n");				
				
				system("pause.bat");
						goto mn;
			}
			case 0:{
				system("cls");
				header();
				printf("\n\n\n\t\t =========================== Good Bye!  ===========================\n\n\n");
				return 0;
				break;
			}			
			
			default:{
				printf("\nPlease enter the correct input!\n\n");
				printf("Do you want to continue? (Y|N) ");				
				char ch =getch();
								
								if(ch=='y' || ch=='Y'){
									goto mn;									
								}else if(ch=='n'||ch=='N'){
										printf("\n\n\n==================================  Good Bye!  =========================================\n\n\n");
									exit(1);
								}else{
									printf("\nWrong input!\n Exiting...");
										printf("\n\n\n==================================  Good Bye!  =========================================\n\n\n");
									exit(1);
								}			
			}
	   	}
				
		}	
			
	return 0;
}
