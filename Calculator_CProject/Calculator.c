#include<stdio.h>
#include<time.h>
float addition(float x,float y){
    return x+y;
}
float multiplication(float x,float y){
    return x*y;
}
int remain(int x,int y){
    return x%y;
}
int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
float conversion(float x,int a){
    if(a==1){
        return x*180/3.14;
    }
    else if(a==2){
        return x*3.14/180;
    }
}
int main(){
    printf("\n \n-------------------------Scientific Calculator----------------------------- \n \n");
    int a = 0;
    while(a!=4){
        int a,b,e,f;
        float c,d,g,h,arr[10];
        FILE* fptr;
        time_t t;
        time(&t);
        fptr = fopen("file.txt", "a+");
        printf("1. Real Numbers \n");
        printf("2. Complex Numbers \n");
        printf("3. History \n");
        printf("4. exit \n");
        printf("\nEnter choice : ");
        scanf("%d",&a);
        if(a==1){
            printf("\n01. Addition \n");
            printf("02. Substraction \n");
            printf("03. Multiplciation \n");
            printf("04. Division \n");
            printf("05. Remainder \n");
            printf("06. Factorial \n");
            printf("07. Logarithmic functions \n");
            printf("08. Exponential \n");
            printf("09. Trignometric functions \n");
            printf("10. Quadratic Equation \n");
            printf("11. Permutation \n");
            printf("12. Combination \n");
            printf("13. Volume and Surface Area \n");
            printf("14. Go Back \n");
            printf("\nEnter Choice : ");
            scanf("%d",&b);
            printf("\n");
            if(b==1){
                printf("-----------Addition---------\n");
                printf("\nEnter First number : ");
                scanf("%f",&c);
                printf("Enter Second number : ");
                scanf("%f",&d);
                printf("\n%.3f + %.3f = %.3f \n",c,d,addition(c,d));
                fprintf(fptr,"%.3f + %.3f = %.3f \n",c,d,addition(c,d));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==2){
                printf("-----------Substraction---------\n");
                printf("\nEnter First number : ");
                scanf("%f",&c);
                printf("Enter Second number : ");
                scanf("%f",&d);
                printf("\n%.3f - %.3f = %.3f \n",c,d,addition(c,-d));
                fprintf(fptr,"%.3f - %.3f = %.3f \n",c,d,addition(c,-d));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==3){
                printf("-----------Multiplication---------\n");
                printf("\nEnter First number : ");
                scanf("%f",&c);
                printf("Enter Second number : ");
                scanf("%f",&d);
                printf("\n%.3f x %.3f = %.3f \n",c,d,multiplication(c,d));
                fprintf(fptr,"%.3f x %.3f = %.3f \n",c,d,multiplication(c,d));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==4){
                printf("-------------Division-----------\n");
                printf("\nEnter First number : ");
                scanf("%f",&c);
                printf("Enter Second number : ");
                scanf("%f",&d);
                printf("\n%.3f / %.3f = %.3f \n",c,d,multiplication(c,1/d));
                fprintf(fptr,"%.3f / %.3f = %.3f \n",c,d,multiplication(c,1/d));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==5){
                printf("----------------Remainder--------------\n");
                printf("\nEnter First number : ");
                scanf("%d",&e);
                printf("Enter Second number : ");
                scanf("%d",&f);
                printf("\nRemainder of %d/%d = %d \n",e,f,remain(e,f));
                fprintf(fptr,"\nRemainder of %d/%d = %d \n",e,f,remain(e,f));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==6){
                printf("----------------Factorial--------------\n");
                printf("\nEnter number : ");
                scanf("%d",&e);
                printf("\n%d! = %d \n",e,factorial(e));
                fprintf(fptr,"\n%d! = %d \n",e,factorial(e));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==7){
                printf("----------------Quadratic-Equation--------------\n");
                printf("\nEnter Degree : ");
                scanf("%d",&e);
                int a = 0;
                for(int i=0;i<e+1;i++){
                    printf("Enter coeffecient of x^%d\n",i);
                    scanf("%f",arr[i]);
                }
                printf("\n \n");
            }
            else if(b==9){
                int ch;
                printf("----------------Trignometric-Function--------------\n");
                printf("\n1. Trignoemtric Function");
                printf("\n2. Inverse Trignometric Function\n");
                printf("\nEnter Choice : ");
                scanf("%d",&ch);
                if(ch==1){ 
                    int ch1;
                    printf("\n----------------------Trignometric-Function------------------\n");
                    printf("\n1. cos(x)");
                    printf("\n2. sin(x)");
                    printf("\n3. tan(x)");
                    printf("\n4. sec(x)");
                    printf("\n5. cosec(x)");
                    printf("\n6. cot(x)\n");
                    printf("\nEnter Choice : ");
                    scanf("%d",&ch1);
                    if(ch1==1){
                        float s;
                        printf("\nEnter thetha() : ");
                        scanf("%f",&s);
                        printf("\nVolume of %f sided Cube = %f\n\n",s,(s*s*s));
                        fprintf(fptr,"\nVolume of %f sided Cube = %f\n\n",s,(s*s*s));
                    }
                    else if(ch1==2){
                        float l,b,h;
                        printf("\nEnter length : ");
                        scanf("%f",&l);
                        printf("Enter breadth : ");
                        scanf("%f",&b);
                        printf("Enter height : ");
                        scanf("%f",&h);
                        printf("\nVolume of Cuboid of dimensions (%f x %f x %f) = %f\n\n",l,b,h,(l*b*h));
                        fprintf(fptr,"\nVolume of Cuboid of dimensions (%f x %f x %f) = %f\n\n",l,b,h,(l*b*h));
                    }
                    else if(ch1==3){
                        float r;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("\nVolume of Sphere = %f\n\n",(4/3)*(3.141)*r*r*r);
                        fprintf(fptr,"\nVolume of Sphere = %f\n\n",(4/3)*(3.141)*r*r*r);
                    }
                    else if(ch1==4){
                        float r,h;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("Enter Height : ");
                        scanf("%f",&h);
                        printf("\nVolume of Cone = %f\n\n",((3.141*r*r*h)/3));
                        fprintf(fptr,"\nVolume of Cone = %f\n\n",((3.141*r*r*h)/3));
                    }
                    else if(ch1==5){
                        float r,h;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("Enter Height : ");
                        scanf("%f",&h);
                        printf("\nVolume of Cylinder = %f\n\n",(3.141)*r*r*h);
                        fprintf(fptr,"\nVolume of Cylinder = %f\n\n",(3.141)*r*r*h);
                    }
                    else{
                        printf("\nWrong choice\n");
                    }
                }
                else if(ch==2){
                    printf("\n---------------Inverse-Trignoemtric-Function---------------\n");
                    int ch2;
                    printf("\n1. cos-1(x)");
                    printf("\n2. sin-1(x)");
                    printf("\n3. tan-1(x)");
                    printf("\n4. sec-1(x)");
                    printf("\n5. cosec-1(x)");
                    printf("\n6. cot-1(x)\n");
                    printf("\nEnter Choice : ");
                    scanf("%d",&ch2 );
                    if(ch2==1){
                        float s;
                        printf("\nEnter Side : ");
                        scanf("%f",&s);
                        printf("\nSurface Area of %f sided Cube = %f\n\n",s,6*(s*s));
                        fprintf(fptr,"\nSurface Area of %f sided Cube = %f\n\n",s,6*(s*s));
                    }
                    else if(ch2==2){
                        float l,b,h;
                        printf("\nEnter length : ");
                        scanf("%f",&l);
                        printf("Enter breadth : ");
                        scanf("%f",&b);
                        printf("Enter height : ");
                        scanf("%f",&h);
                        printf("\nSurface Area of Cuboid of dimensions (%f x %f x %f) = %f\n\n",l,b,h,2*((l*b)+(b*h)+(h*l)));
                        fprintf(fptr,"\nSurface Area of Cuboid of dimensions (%f x %f x %f) = %f\n\n",l,b,h,2*((l*b)+(b*h)+(h*l)));
                    }
                    else if(ch2==3){
                        float r;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("\nSurface Area of Sphere = %f\n\n",(4)*(3.141)*r*r);
                        fprintf(fptr,"\nSurface Area of Sphere = %f\n\n",(4)*(3.141)*r*r);
                    }
                    else if(ch2==4){
                        float r, h, l;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("Enter Height : ") ; 
                        scanf("%f",&h);
                        //l =sqrt((r*r) + (h*h));
                        //Replace the 'sqrt' with the expo function which will be added later in the program
                        printf("\nSurface Area of Cone \n((π x r x l)+(π x r x r)= %f\n\n",((3.141*r*l)+(3.141*r*r)));
                        fprintf(fptr,"\nSurface Area of Cone \n((π x r x l)+(π x r x r)= %f\n\n",((3.141*r*l)+(3.141*r*r)));
                    }
                    else if(ch2==5){
                        float r,h;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("Enter Height : ");
                        scanf("%f",&h);
                        printf("\nSurface Area of Cylinder = %f\n\n",(3.141)*r*r*2 + (3.141)*r*h*2);
                        fprintf(fptr,"\nSurface Area of Cylinder = %f\n\n",(3.141)*r*r*2 + (3.141)*r*h*2);
                    } 
                    else{
                        printf("\nWrong choivce!\n");
                    }
                }
                else{
                    printf("Wrong choice!");
                }
                printf("\n");
            }
            else if(b==11){
                printf("------------------Permutation----------------\n");
                printf("\nEnter First number(n) : ");
                scanf("%d",&e);
                printf("Enter Second number(r) : ");
                scanf("%d",&f);
                if(e>=f){
                    printf("\nPermutaion : %dP%d = %d \n",e,f,factorial(e)/factorial(e-f));
                    fprintf(fptr,"\nPermutaion : %dP%d = %d \n",e,f,factorial(e)/factorial(e-f));
                    fprintf(fptr,"%s\n",ctime(&t));
                }
                else{
                    printf("\nThe second number can't be greater than the first number");
                }
                printf("\n \n");
            }
            else if(b==12){
                printf("------------------Combination----------------\n");
                printf("\nEnter First number(n) : ");
                scanf("%d",&e);
                printf("Enter Second number(r) : ");
                scanf("%d",&f);
                if(e>=f){
                    printf("\nCombination : %dC%d = %d \n",e,f,factorial(e)/(factorial(f)*factorial(e-f)));
                    fprintf(fptr,"\nCombination : %dC%d = %d \n",e,f,factorial(e)/(factorial(f)*factorial(e-f)));
                    fprintf(fptr,"%s\n",ctime(&t));
                }
                else{
                    printf("\nThe second number can't be greater than the first number");
                }
                printf("\n \n");
            }
            //Ashish
            else if(b==13){
                int ch;
                printf("----------------Volume-And-Surface-Area--------------\n");
                printf("\n1. Volume");
                printf("\n2. Surface Area\n");
                printf("\nEnter Choice : ");
                scanf("%d",&ch);
                if(ch==1){ 
                    int ch1;
                    printf("\n----------------------Volume------------------\n");
                    printf("\n1. Cube");
                    printf("\n2. Cuboid");
                    printf("\n3. Sphere");
                    printf("\n4. Cone");
                    printf("\n5. Cylinder\n");
                    printf("\nEnter Choice : ");
                    scanf("%d",&ch1);
                    if(ch1==1){
                        float s;
                        printf("\nEnter Side : ");
                        scanf("%f",&s);
                        printf("\nVolume of %.3f sided Cube = %.3f\n",s,(s*s*s));
                        fprintf(fptr,"\nVolume of %.3f sided Cube = %.3f\n",s,(s*s*s));
                    }
                    else if(ch1==2){
                        float l,b,h;
                        printf("\nEnter length : ");
                        scanf("%f",&l);
                        printf("Enter breadth : ");
                        scanf("%f",&b);
                        printf("Enter height : ");
                        scanf("%f",&h);
                        printf("\nVolume of Cuboid of dimensions (%.3f x %.3f x %.3f) = %.3f\n",l,b,h,(l*b*h));
                        fprintf(fptr,"\nVolume of Cuboid of dimensions (%.3f x %.3f x %.3f) = %.3f\n",l,b,h,(l*b*h));
                    }
                    else if(ch1==3){
                        float r;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("\nVolume of Sphere = %.3f\n",(4/3)*(3.141)*r*r*r);
                        fprintf(fptr,"\nVolume of Sphere = %.3f\n",(4/3)*(3.141)*r*r*r);
                    }
                    else if(ch1==4){
                        float r,h;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("Enter Height : ");
                        scanf("%f",&h);
                        printf("\nVolume of Cone = %.3f\n",((3.141*r*r*h)/3));
                        fprintf(fptr,"\nVolume of Cone = %.3f\n",((3.141*r*r*h)/3));
                    }
                    else if(ch1==5){
                        float r,h;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("Enter Height : ");
                        scanf("%f",&h);
                        printf("\nVolume of Cylinder = %.3f\n",(3.141)*r*r*h);
                        fprintf(fptr,"\nVolume of Cylinder = %.3f\n",(3.141)*r*r*h);
                    }
                    else{
                        printf("\nWrong choice\n");
                        continue;
                    }
                    fprintf(fptr,"%s\n",ctime(&t));
                    printf("\n");
                }
                else if(ch==2){
                    printf("\n------------------Surface-Area------------------\n");
                    int ch2;
                    printf("\n1. Cube");
                    printf("\n2. Cuboid");
                    printf("\n3. Sphere");
                    printf("\n4. Cone");
                    printf("\n5. Cylinder\n");
                    printf("\nEnter Choice : ");
                    scanf("%d",&ch2 );
                    if(ch2==1){
                        float s;
                        printf("\nEnter Side : ");
                        scanf("%f",&s);
                        printf("\nSurface Area of %.3f sided Cube = %.3f\n",s,6*(s*s));
                        fprintf(fptr,"\nSurface Area of %.3f sided Cube = %.3f\n",s,6*(s*s));
                    }
                    else if(ch2==2){
                        float l,b,h;
                        printf("\nEnter length : ");
                        scanf("%f",&l);
                        printf("Enter breadth : ");
                        scanf("%f",&b);
                        printf("Enter height : ");
                        scanf("%f",&h);
                        printf("\nSurface Area of Cuboid of dimensions (%.3f x %.3f x %.3f) = %.3f\n",l,b,h,2*((l*b)+(b*h)+(h*l)));
                        fprintf(fptr,"\nSurface Area of Cuboid of dimensions (%.3f x %.3f x %.3f) = %.3f\n",l,b,h,2*((l*b)+(b*h)+(h*l)));
                    }
                    else if(ch2==3){
                        float r;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("\nSurface Area of Sphere = %.3f\n",(4)*(3.141)*r*r);
                        fprintf(fptr,"\nSurface Area of Sphere = %.3f\n",(4)*(3.141)*r*r);
                    }
                    else if(ch2==4){
                        float r, h, l;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("Enter Height : ") ; 
                        scanf("%f",&h);
                        //l =sqrt((r*r) + (h*h));
                        //Replace the 'sqrt' with the expo function which will be added later in the program
                        printf("\nSurface Area of Cone ((π x r x l)+(π x r x r)= %.3f\n",((3.141*r*l)+(3.141*r*r)));
                        fprintf(fptr,"\nSurface Area of Cone ((π x r x l)+(π x r x r)= %.3f\n",((3.141*r*l)+(3.141*r*r)));
                    }
                    else if(ch2==5){
                        float r,h;
                        printf("\nEnter Radius : ");
                        scanf("%f",&r);
                        printf("Enter Height : ");
                        scanf("%f",&h);
                        printf("\nSurface Area of Cylinder = %.3f\n",(3.141)*r*r*2 + (3.141)*r*h*2);
                        fprintf(fptr,"\nSurface Area of Cylinder = %.3f\n",(3.141)*r*r*2 + (3.141)*r*h*2);
                    } 
                    else{
                        printf("\nWrong choice!\n");
                        continue;
                    }
                    fprintf(fptr,"%s\n",ctime(&t));
                    printf("\n");
                }
                else{
                    printf("Wrong choice!");
                }
                printf("\n");
            }
            else if(b==14){
                continue;
            }
            else{
                printf("Not a valid choice , Enter Again \n\n");
            }
        }
        else if(a==2){
            printf("\n1. Addition \n");
            printf("2. Substraction \n");
            printf("3. Multiplication \n");
            printf("4. Division \n");
            printf("5. Modulus(|Z|) \n");
            printf("6. Argument \n");
            printf("7. Go Back \n");
            printf("\nEnter Choice : ");
            printf("\n");
            scanf("%d",&b);
            if(b==1){
                printf("-----------Complex-Addition---------\n");
                printf("\nEnter First number(a+bi) : ");
                scanf("%f+%fi",&c,&d);
                printf("Enter Second number(a+bi) : ");
                scanf("%f+%fi",&g,&h);
                printf("\n%.1f+%.1fi + %.1f+%.1fi = %.1f+%.1fi \n",c,d,g,h,addition(c,g),addition(d,h));
                fprintf(fptr,"\n%.1f+%.1fi + %.1f+%.1fi = %.1f+%.1fi \n",c,d,g,h,addition(c,g),addition(d,h));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==2){
                printf("-----------Complex-Substraction---------\n");
                printf("\nEnter First number(a+bi) : ");
                scanf("%f+%fi",&c,&d);
                printf("Enter Second number(a+bi) : ");
                scanf("%f+%fi",&g,&h);
                printf("\n%.1f+%.1fi - (%.1f+%.1fi) = %.1f+%.1fi \n",c,d,g,h,addition(c,-g),addition(d,-h));
                fprintf(fptr,"\n%.1f+%.1fi - (%.1f+%.1fi) = %.1f+%.1fi \n",c,d,g,h,addition(c,-g),addition(d,-h));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==3){
                printf("-----------Complex-Multiplication---------\n");
                printf("\nEnter First number(a+bi) : ");
                scanf("%f+%fi",&c,&d);
                printf("Enter Second number(a+bi) : ");
                scanf("%f+%fi",&g,&h);
                printf("\n(%.1f+%.1fi) * (%.1f+%.1fi) = %.1f+%.1fi \n",c,d,g,h,multiplication(c,g)-multiplication(d,h),multiplication(c,h)+multiplication(g,d));
                fprintf(fptr,"\n(%.1f+%.1fi) * (%.1f+%.1fi) = %.1f+%.1fi \n",c,d,g,h,multiplication(c,g)-multiplication(d,h),multiplication(c,h)+multiplication(g,d));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==4){
                printf("-----------Complex-Division---------\n");
                printf("\nEnter First number(a+bi) : ");
                scanf("%f+%fi",&c,&d);
                printf("Enter Second number(a+bi) : ");
                scanf("%f+%fi",&g,&h);
                printf("\n(%.1f+%.1fi) / (%.1f+%.1fi) = (%.1f+%.1fi)/%.1f \n",c,d,g,h,multiplication(c,g)-multiplication(d,-h),multiplication(c,-h)+multiplication(g,d),g*g+h*h);
                fprintf(fptr,"\n(%.1f+%.1fi) / (%.1f+%.1fi) = %.1f+%.1fi \n",c,d,g,h,multiplication(c,g)-multiplication(d,-h),multiplication(c,-h)+multiplication(g,d),g*g+h*h);
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
        }
        else if(a==3){
            printf("\nHistory\n\n");
        }
        else if(a==4){
            printf("\n-------------------------------Thank You-----------------------------------\n\n");
            break;
        }
        else{
            printf("\nNot a valid choice , Enter Again \n \n");
        }
        fclose(fptr);

    }
}
/*one line left in quadratic equation and to make modulus using power function can also switch the one in complex division
once they make the function for it*/