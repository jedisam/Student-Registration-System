#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "./time.h"

#ifndef DATA_H_
#define DATA_H_

struct Students{
	int id;
	char name[30];
	char department[30];
	int  available;
	int  remove;
	int  block;
	char sex[5];
	int  year;
	
}stud;
int avail=1;
int nvail = 0;
char av[30]="Available";
char nav[30]="Not Avaialable";	

	void header() {
	// screen menu
	
		system("color 2");
	printf("\n\t\t");
	tm();
	printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t::\t\t\t\t\t\t\t\t::\n");
	printf("\t\t:.\t ----Student Registaration System Admin Panel----\t.:\n");
	printf("\t\t::\t\t\t V 1.0.0\t\t\t\t::\n");
	printf("\t\t::\t\t\t\t\t\t\t\t::\n");
	printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t::\t\t\t\t\t\t\t\t::\n");
} 

	void check(FILE *s){
		if(s==NULL){
			printf("succsessfull closing File");
		}
	}
	
	void delay(){
		int i=0;
	//	printf("Exiting");
		for(i=0;i<3;i++){
			printf(". ");
			system("Sleep 0.1");
		}
	
	}
	
	void addStudent(FILE *Fp){					
							
							while(2){
							
							printf("\nEnter the name of the student:  ");
							scanf("%s",&stud.name);
							printf("\n");
							printf("ID of the student:  ");
							scanf("%d",&stud.id); 
							printf("\n");
							printf("Department of student [electrical,software,mechanical,chemical] : ");
						    scanf("%s",&stud.department);
							printf("\n");
							printf("Year of Student [1-5] : ");
							scanf("%d",&stud.year); 
							printf("\n");
							printf("Sex:  ");
							scanf("%s",&stud.sex);
							printf("\n");
							printf("Block of student [1-4] : ");
							scanf("%d",&stud.block);
							printf("\n");							
							
								fprintf(Fp,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,avail);
								printf("\n    =========Student has been succsessfully registered!=========\n\n");
								printf("Exiting");	delay();
								exit(1);
								
								
						}
	}
	void viewByDepartment(FILE *op,FILE *Mp, FILE *Sp, FILE *ch){
			// ELECTRICAL DEPARTMENT
									
				
				 fscanf(op,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 int elec=0;				
					
					while(3){
							int cnt = fscanf(op,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(strcmp(stud.department,"electrical")==0){
							  	if(elec==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tElectrical\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailabile\n\n");
							  	}
								if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
							
							
								elec++;
						}
					}
		
			     // MECHANICAL DEPARTMENT				
				
				 fscanf(Mp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 int mec=0;				
					
					while(3){
							int cnt =  fscanf(Mp,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(strcmp(stud.department,"mechanical")==0){
							  	if(mec==0){
							  	printf("\n=================================================================\n");
							  	printf("\n\t\tMechanical\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailable\n\n");
							  	}
				
									if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
							
								mec++;
						}
					}
				 
					 // Software DEPARTMENT
				
				 fscanf(Sp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 int sof=0;		
					
					while(3){
							int cnt =  fscanf(Sp,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(strcmp(stud.department,"software")==0){
							  	if(sof==0){
							  		printf("\n=================================================================\n");
							  			printf("\n\t\tSoftware\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailable\n\n");
							  	}
								if(stud.available){
								printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
							
								sof++;
						}
					}		
				 
					 // Chemical DEPARTMENT
				
				 fscanf(ch,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 int chem=0;		
					
					while(3){
							int cnt =  fscanf(ch,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(strcmp(stud.department,"chemical")==0){
							  	if(chem==0){
							  		printf("\n=================================================================\n");
							  			printf("\n\t\tChemical\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailable\n\n");
							  	}
								if(stud.available){
								printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
							
								chem++;
						}
					}		
	}
	
	void viewByBlock(FILE *bp,FILE *bp2,FILE *bp3,FILE *bp4){
		
		// Block 1
		
		 fscanf(bp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				  int blk=0;
					
					while(3){
							int cnt =  fscanf(bp,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.block==1){
							  	if(blk==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tBlock 1\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailable\n\n");
							  	}
								if(stud.available){
								printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
								blk++;
						}
					}
					 
					// Block 2
						
			 fscanf(bp2,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
			 	int blk2=0;
					
					while(3){
							int cnt = fscanf(bp2,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.block==2){
							  	if(blk2==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tBlock 2\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailable\n\n");
							  	}
								
									if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
							
								blk2++;
						}
					}
				 
				 	// Block 3
	
			 fscanf(bp3,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
			 	int blk3=0;
					
					while(3){
							int cnt = fscanf(bp3,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.block==1){
							  	if(blk3==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tBlock 3\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailable\n\n");
							  	}
								
								if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
							
								blk3++;
						}
					}
			
				// Block 4
			
				 fscanf(bp4,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 	int blk4=0;
					
					while(3){
							int cnt =fscanf(bp4,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.block==4){
							  	if(blk4==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tBlock 4\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailable\n\n");
							  	}
								
								if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
							
								blk4++;
						}
					}
			
	}
	
	void viewByAcademicYear(FILE *yp,FILE *yp2,FILE *yp3,FILE *yp4,FILE *yp5){
		
		// YEAR 1
		
		 fscanf(yp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 	 int yr=0;
					
					while(3){
							int cnt =fscanf(yp,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.year==1){
							  	if(yr==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tYear 1\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailabile\n\n");
							  	}
								
								if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
							
								yr++;
						}
					}
				
				// Year 2
		
				  fscanf(yp2,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				  int yr2=0;
					
					while(3){
							int cnt =fscanf(yp2,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.year==2){
							  	if(yr2==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tYear 2\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailabile\n\n");
							  	}
								
								if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
								yr2++;
						}
					}
			  
				 	// Year 3
	
				 fscanf(yp3,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 	int yr3=0;
					
					while(3){
							int cnt = fscanf(yp3,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.year==3){
							  	if(yr3==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tYear 3\n");
								printf("=================================================================\n");
									printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailabile\n\n");
							  	}
								
								if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
								yr3++;
						}
					}
			   
				 // Year 4
			
				 fscanf(yp4,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 int yr4=0;
					
					while(3){
							int cnt = fscanf(yp4,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.year==4){
							  	if(yr4==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tYear 4\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailabile\n\n");
							  	}
								
								if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
								yr4++;
						}
					}
					
				 // Year 5
						
				 fscanf(yp5,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
				 	int yr5=0;
		
					while(3){
							int cnt =fscanf(yp5,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.year==5){
							  	if(yr5==0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tYear 5\n");
								printf("=================================================================\n");
								printf("\nName\tID\tDepartment\tYear\tSex\tBlock\tAvailabile\n\n");
							  	}
								
								if(stud.available){
										printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,av);
								}else{	printf("%s\t%d\t%s\t%d\t%s\t%d\t%s\n",stud.name,stud.id,stud.department,stud.year,stud.sex,stud.block,nav);}
								yr5++;
						}
					}
	}
	
	void search(FILE *sear,int ID){
		
		int coun = 0;
		fscanf(sear,"%s\t%s\t%s\t%s\t%s\t%s\t%s\n",&stud.name,&stud.name,&stud.department,&stud.name,&stud.sex,&stud.name,&stud.name);
					
					while(3){
							int cnt =fscanf(sear,"%s\t%d\t%s\t%d\t%s\t%d\t%d\n",&stud.name,&stud.id,&stud.department,&stud.year,&stud.sex,&stud.block,&stud.available);
							if(cnt==-1)
							  break;
							  	if(stud.id==ID){
									coun++;
								if(stud.available){
										printf("\n====================================================================================\n");
										printf("\n\nStudent Found!\n\n");
										printf("Name: %s",stud.name); printf("\nId: %d",stud.id);printf("\nDepartment: %s",stud.department);
										printf("\nAcademic Year: %d",stud.year);printf("\nSex: %s",stud.sex);printf("\nBlock: %d",stud.block);printf("\nAvailable: %s",av);
										printf("\n====================================================================================\n");	
								}else{	printf("\n====================================================================================\n");
										printf("\n\n\nStudent Found\n\n");
										printf("Name: %s",stud.name); printf("\nId: %d",stud.id);printf("\nDepartment: %s",stud.department);
										printf("\nAcademic Year: %d",stud.year);printf("\nSex: %s",stud.sex);printf("\nBlock: %d",stud.block);printf("\nAvailable: %s",nav);}
								
						}
					}
						if(coun==0){
									printf("\n============================There is no Student with given ID!============================\n\n");
							}
	}

#endif



