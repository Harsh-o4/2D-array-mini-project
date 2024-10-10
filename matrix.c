#include <stdio.h>
void array_print();
void row_fill(int a,int b);
void col_fill(int a,int b);
void td_array();
void diag_mat();
void diag_enter();
void diag_check();
void tridiag();
void tridiag_enter();
void tridiag_check();
void uppertri();
void uppertri_enter();
void uppertri_check();
void lowertri();
void lowertri_enter();
void lowertri_check();
void symm();
void symm_check();
void symm_enter();
void sparse();
void sparse_check();




int main(){
   
    int choice;
    printf("\n................................................................\n");
    printf("\t\t\tMAIN MENU\n");
    printf("ENTER CHOICE: \n");
    printf("\t 1. Reading and Printing of a 2D array. \n");
    printf("\t 2. Types of SQUARE 2D arrays \n");
    printf("\t 99. EXIT \n");



    renter:
        scanf("%d",&choice);


    switch(choice){
        case 1:  array_print(); break;
        case 2:  td_array();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
    }
    return 0;
}

void array_print(){
    printf("\n................................................................\n");
    printf("READING 2D ARRAY");
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    printf("CHOOSE FILLING METHOD:\n");
    
    int cho;
    
    printf("\t 1. Row Major order \n");
    printf("\t 2. Column Major order \n");

    renter:
        scanf("%d",&cho);

    switch(cho){
        case 1: row_fill(m,n);break;
        case 2: col_fill(m,n);break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
    }


}

void row_fill(int a, int b){
    int i,j;
    int A[15][15];
    rowfill_start:
     printf("\n................................................................\n");
    printf("ROW MAJOR ORDER");
    printf("\n................................................................\n");

    for(i=0;i<a;++i){
        for(j=0;j<b;++j){
            printf("\nEnter A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n................................................................\n");
    printf("Entered array is:\n");

    for(i=0;i<a;++i){
        for(j=0;j<b;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    
    
    ("\n................................................................\n");
    printf("\t1. Re-Enter array \n");
    printf("\t2. Go to MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch2;
    renter:
        scanf("%d",&ch2);

    switch(ch2){
        case 1: goto rowfill_start;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
    }
    
}

void col_fill(int a, int b){
    int i,j;
    int A[15][15];
    rowfill_start:
     printf("\n................................................................\n");
    printf("ROW MAJOR ORDER");
    printf("\n................................................................\n");

    for(j=0;j<b;++j){
        for(i=0;i<a;++i){
            printf("\nEnter A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("\n................................................................\n");
    printf("Entered array is:\n");

    for(i=0;i<a;++i){
        for(j=0;j<b;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    
    
    ("\n................................................................\n");
    printf("\t1. Re-Enter array \n");
    printf("\t2. Restart program\n");
    printf("\t99. EXIT\n");
    int ch2;
    renter:
        scanf("%d",&ch2);

    switch(ch2){
        case 1: goto rowfill_start;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
    }
}

void td_array(){
    printf("\n................................................................\n");
    printf("TYPES OF SQUARE 2-D ARRAYS");
    printf("\n................................................................\n");
    printf("CHOOSE TYPE:\n");
    printf("\t 1. Diagonal Matrix \n");
    printf("\t 2. Tridiagonal Matrix \n");
    printf("\t 3. Upper-triangular Matrix \n");
    printf("\t 4. Lower-Triangular Matrix \n");
    printf("\t 5. Symmetric Matrix \n");
    printf("\t 6. Sparse Matrix \n");
    printf("\t 7. BACK TO MAIN MENU \n");

    int ch3;
    renter:
        scanf("%d",&ch3);

    switch(ch3){
        case 1: diag_mat();break;
        case 2: tridiag(); break;
        case 3: uppertri(); break;
        case 4: lowertri(); break;
        case 5: symm(); break;
        case 6: sparse(); break;
        case 7: main();break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
    }
    

}

void diag_mat(){
    printf("\n................................................................\n");
    printf("DIAGONAL MATRIX \n");
    printf("\t A matrix whose all non-diagonal elements are 0.");
    printf("\n................................................................\n");

    printf("\n ENTER CHOICE: \n");
    printf("\t 1. Make a diagonal matrix \n");
    printf("\t 2. Check for a diagonal matrix \n");
    printf("\t 99. EXIT \n");

    int ch4;
    renter:
        scanf("%d",&ch4);

    switch(ch4){
        case 1: diag_enter(); break;
        case 2: diag_check(); break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break; 
    }

}

void diag_enter(){
    printf("\n................................................................\n");
    printf("MAKING DIAGONAL MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tDiagonal matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Diagonal Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           if(i==j){
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           }
           else
            A[i][j]=0;
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("DIAGONAL ARRAY is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }
    


}

void diag_check(){
   printf("\n................................................................\n");
    printf("MAKING DIAGONAL MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tDiagonal matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Diagonal Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("Entered array is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           if(i!=j){
                if(A[i][j]!=0){
                    printf("Given Array is NOT DIAGONAL.");
                    goto skip;
                }

           } 
            
        }
        
    }
    printf("Given array is DIAGONAL.");
skip:
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }
    
}

void tridiag(){
    printf("\n................................................................\n");
    printf("TRIDIAGONAL MATRIX \n");
    printf("\n................................................................\n");

    printf("\n ENTER CHOICE: \n");
    printf("\t 1. Make a tridiagonal matrix \n");
    printf("\t 2. Check for a tridiagonal matrix \n");
    printf("\t 99. EXIT \n");

    int ch4;
    renter:
        scanf("%d",&ch4);

    switch(ch4){
        case 1: tridiag_enter(); break;
        case 2: tridiag_check(); break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break; 
    }


}

void tridiag_enter(){
    printf("\n................................................................\n");
    printf("TRIDIAGONAL MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tTridiagonal matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    int diff;int ndiff;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            diff=i-j;
            ndiff=-diff;
           if(diff<=1){
            if(ndiff<=1){
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           }
           else
            A[i][j]=0;
           }
           else
            A[i][j]=0;
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("TRIDIAGONAL ARRAY is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }
    

}

void tridiag_check(){
    printf("\n................................................................\n");
    printf("MAKING TRIDIAGONAL MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tTridiagonal matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("Entered array is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");
    int diff,ndiff;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           diff=i-j;
           ndiff=-diff;

           if(diff>1){
            if(A[i][j]!=0){
                printf("Array is NOT TRIDIAGONAL. \n");
                goto skip;
            }
           } 
           if(ndiff>1){
            if(A[i][j]!=0){
                printf("Array is NOT TRIDIAGONAL. \n");
                goto skip;
            }
           }
            
        }
        
    }
    printf("Given array is TRIDIAGONAL.");
skip:
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }

}

void uppertri(){
    printf("\n................................................................\n");
    printf("UPPER-TRIANGULAR MATRIX \n");
    printf("\t Matirx whose elements below the diagional are 0.");
    printf("\n................................................................\n");

    printf("\n ENTER CHOICE: \n");
    printf("\t 1. Make an upper-triangular matrix \n");
    printf("\t 2. Check for an upper-triangular matrix \n");
    printf("\t 99. EXIT \n");

    int ch4;
    renter:
        scanf("%d",&ch4);

    switch(ch4){
        case 1: uppertri_enter(); break;
        case 2: uppertri_check(); break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break; 
    }

}

void uppertri_enter(){
    printf("\n................................................................\n");
    printf("UPPER-TRIANGULAR MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tUpper-Triangular matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           
            if(j>=i){
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           }
           else
            A[i][j]=0;
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("UPPER-TRIANGULAR ARRAY is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }
    
}

void uppertri_check(){
    printf("\n................................................................\n");
    printf("MAKING UPPER-TRIANGULAR MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tUpper-triangular matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("Entered array is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
          
           
           if(i>j){
            if(A[i][j]!=0){
                printf("Array is NOT UPPER-TRIANGULAR. \n");
                goto skip;
            }
           }
            
        }
        
    }
    printf("Given array is UPPER-TRIANGULAR.");
skip:
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }
}

void lowertri(){
    printf("\n................................................................\n");
    printf("LOWER-TRIANGULAR MATRIX \n");
    printf("\t Matirx whose elements above the diagional are 0.");
    printf("\n................................................................\n");

    printf("\n ENTER CHOICE: \n");
    printf("\t 1. Make an lower-triangular matrix \n");
    printf("\t 2. Check for an lower-triangular matrix \n");
    printf("\t 99. EXIT \n");

    int ch4;
    renter:
        scanf("%d",&ch4);

    switch(ch4){
        case 1: lowertri_enter(); break;
        case 2: lowertri_check(); break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break; 
    }
}

void lowertri_enter(){
    printf("\n................................................................\n");
    printf("LOWER-TRIANGULAR MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tLower-Triangular matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           
            if(i>=j){
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           }
           else
            A[i][j]=0;
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("LOWER-TRIANGULAR ARRAY is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }
}

void lowertri_check(){
    printf("\n................................................................\n");
    printf("MAKING LOWER-TRIANGULAR MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tLower-triangular matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("Entered array is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
          
           
           if(j>i){
            if(A[i][j]!=0){
                printf("Array is NOT LOWER-TRIANGULAR. \n");
                goto skip;
            }
           }
            
        }
        
    }
    printf("Given array is LOWER-TRIANGULAR.");
skip:
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }
}

void symm(){
    printf("\n................................................................\n");
    printf("SYMMETRIC MATRIX \n");
    printf("\t Matirx which is equal to its transpose.");
    printf("\n................................................................\n");

    printf("\n ENTER CHOICE: \n");
    printf("\t 1. Make an symmetric matrix \n");
    printf("\t 2. Check for an symmetric matrix \n");
    printf("\t 99. EXIT \n");

    int ch4;
    renter:
        scanf("%d",&ch4);

    switch(ch4){
        case 1: symm_enter(); break;
        case 2: symm_check(); break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break; 
    }
}

void symm_enter(){
     printf("\n................................................................\n");
    printf("SYMMETRICAL MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tSymmetrical matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<i+1;++j){
           
            if(i>=j){
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           }
           A[j][i]=A[i][j];
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("SYMMETRICAL ARRAY is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }
}

void symm_check(){
    printf("\n................................................................\n");
    printf("MAKING SYMMETRICAL MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    if(m!=n){
        printf("\n \tSymmetrical matrix MUST BE A SQUARE MATRIX.\n\n");
        printf("\t 1. Re-enter Column & Row. \n");
        printf("\t 2. Go to MAIN MENU. \n");
        printf("\t 99. EXIT. \n");

        int ch5;
        renter:
            scanf("%d",&ch5);

        switch(ch5){
            case 1: goto error; break;
            case 2: main();break;
            case 99: break;
            default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break;
        }

    }
   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("Entered array is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
          
           
           if(A[i][j]!=A[j][i]){
            printf("Array is NOT SYMMETRICAL. \n");
            goto skip;
            
           }
            
        }
        
    }
    printf("Given array is SYMMETRICAL.");
skip:
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }

}

void sparse(){
    printf("\n................................................................\n");
    printf("SPARSE MATRIX \n");
    printf("\t Matirx in which majority of its elements are 0.");
    printf("\n................................................................\n");

    printf("\n ENTER CHOICE: \n");
    printf("\t 1. Check for an sparse matrix \n");
    printf("\t 99. EXIT \n");

    int ch4;
    renter:
        scanf("%d",&ch4);

    switch(ch4){
        case 1: sparse_check(); break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter; break; 
    }
}

void sparse_check(){
     printf("\n................................................................\n");
    printf("CHECKING SPARSE MATRIX");
   error:
    printf("\n................................................................\n");
    int m,n;

    printf("Enter no. of rows: \n");
    scanf("%d",&m);
    printf("\nEnter no. of columns: \n");
    scanf("%d",&n);

    printf("................................................................\n");
    
//does not need to be square

   diagrenter:
     printf("\n................................................................\n");
     printf("Enter Values: \n");
    int i,j;
    int A[15][15];
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
           
             printf("\nEnter A[%d][%d]: ",i,j);
             scanf("%d",&A[i][j]);
           
        }
        printf("\n");
    }
   
    printf("\n................................................................\n");
    printf("Entered array is:\n");

    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("\t %d",A[i][j]);
            
        }
        printf("\n");
    }
    printf("\n................................................................\n");
    int htotal,zeros;
    htotal=(m*n)/2;
    zeros=0;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
          
           if(A[i][j]==0){
            ++zeros;
           }
            
        }
        
    }
    printf("Total elements: %d   Zeroes: %d\n",m*n,zeros);
    if(zeros>htotal){
        printf("Given matrix is SPARSE.");
    }
    else{
        printf("Given matrix is NOT SPARSE.");
    }

skip:
    printf("\n................................................................\n");

    printf("\t1. Re-Enter array \n");
    printf("\t2. MAIN MENU\n");
    printf("\t99. EXIT\n");
    int ch6;
    renter2:
        scanf("%d",&ch6);

    switch(ch6){
        case 1: goto diagrenter ;break;
        case 2: main();break;
        case 99: break;
        default: printf("\nINVALID INPUT \nRE-ENTER valid value \n");
                goto renter2; break;
    }

}


