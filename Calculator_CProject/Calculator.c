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
float loga(float x){
    float result = 0;
    float term = x-1;
    if(x<=1 && x>0){
        for(int i = 1;i <= 100;i++) { 
            result += term/(i);
            term *= (1-x);
        }
        return result/2.303;
    }
    else if(x>1){
        float count = 0;
        while(x>1){
            x/=10;
            count += 1;
        }
        return loga(x)+count;
    }
    else{
        return 0.0;
    }
}
float logarithm(float x,float y){
    return loga(x)/loga(y);
}
float exponential(float x,float y){
    float sum = 0;
    float term = 1;
    if(y<1 && y>0){
        for(int i=0;i<100;i++){
            sum += term;
            term *= (loga(x)*2.303*y/(i+1));
        }
    }
    else if(y<0){
        return exponential(1/x,-y);
    }
    else if(y==0){
        return 1.0;
    }
    else{
        int c = (int)y;
        float g = 1;
        for(int i=0;i<c;i++){
            g *= x;
        }
        return g*exponential(x,y-c);
    }
    return sum;
}
float sini(float x){
    float result = 0;
    float term = x;
    for(int i=1;i<100;i++){
        result += term;
        term *= (2*i-1)*x*x/(2*i*(2*i+1));
    }
    return result;
}
float tani(float x){
    float result = 0;
    float term = x;
    if(x<=1 && x>=-1){
        for(int i=1;i<100;i+=2){
            result += term/i;
            term *= -1*x*x;
        }
    }
    else{
        result = 1.57 - tani(1/x);
    }
    return result;
}
float cosa(float x){
    while(x>=6.28){
        x-=6.28;
    }
    while(x<0){
        x+=6.28;
    }
    float sum = 1;
    float term = 1;
    for(int i=0;i<100;i+=2){
        term *= x*x*(-1)/((i+1)*(i+2));
        sum += term;
    }
    return sum;
}
int main(){
    printf("\n \n-------------------------Scientific Calculator------------------------------\n \n");
    int a = 0;
    float b = 5.4;
    while(a!=4){
        int a,b,e,f;
        float c,d,g,h,arr[10];
        char ch;
        FILE* fptr;
        FILE* fptr1;
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
                fprintf(fptr,"\n%.3f + %.3f = %.3f \n",c,d,addition(c,d));
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
                fprintf(fptr,"\n%.3f - %.3f = %.3f \n",c,d,addition(c,-d));
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
                fprintf(fptr,"\n%.3f x %.3f = %.3f \n",c,d,multiplication(c,d));
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
                fprintf(fptr,"\n%.3f / %.3f = %.3f \n",c,d,multiplication(c,1/d));
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
                printf("-------------Logarithmic------------\n");
                printf("\nEnter Number : ");
                scanf("%f",&c);
                printf("Enter Base Number : ");
                scanf("%f",&d);
                printf("\nlog %.3f %.3f = %.3f \n",d,c,logarithm(c,d));
                fprintf(fptr,"\nlog %.3f %.3f = %.3f \n",d,c,logarithm(c,d));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==8){
                printf("-------------Exponential-----------\n");
                printf("\nEnter First number : ");
                scanf("%f",&c);
                printf("Enter Second number : ");
                scanf("%f",&d);
                printf("\n%.3f ^ %.3f = %.3f \n",c,d,exponential(c,d));
                fprintf(fptr,"\n%.3f ^ %.3f = %.3f \n",c,d,exponential(c,d));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==9){
                int ch;
                printf("----------------Trignometric-Function--------------\n");
                printf("\n1. Trignometric Function");
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
                    printf("\n6. cot(x)");
                    printf("\n7. exit\n");
                    printf("\nEnter Choice : ");
                    scanf("%d",&ch1);
                    printf("\n");
                    if(ch1==1){
                        float s;
                        printf("-----------------cos0---------------\n");
                        printf("\nEnter Thetha(in Radians) : ");
                        scanf("%f",&c);
                        printf("\ncos(%.3f) = %.3f \n",c,cosa(c));
                        fprintf(fptr,"\ncos(%.3f) = %.3f \n",c,cosa(c));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch1==2){
                        float s;
                        printf("------------------sin0-----------------\n");
                        printf("\nEnter Thetha(in Radians) : ");
                        scanf("%f",&c);
                        printf("\nsin(%.3f) = %.3f \n",c,exponential(1-exponential(cosa(c),2),0.5));
                        fprintf(fptr,"\nsin(%.3f) = %.3f \n",c,exponential(1-exponential(cosa(c),2),0.5));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch1==3){
                        float s;
                        printf("------------------tan0-----------------\n");
                        printf("\nEnter Thetha(in Radians) : ");
                        scanf("%f",&c);
                        printf("\ntan(%.3f) = %.3f \n",c,exponential(1-exponential(cosa(c),2),0.5)/cosa(c));
                        fprintf(fptr,"\ntan(%.3f) = %.3f \n",c,exponential(1-exponential(cosa(c),2),0.5)/cosa(c));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch1==4){
                        float s;
                        printf("------------------sec0-----------------\n");
                        printf("\nEnter Thetha(in Radians) : ");
                        scanf("%f",&c);
                        printf("\nsec(%.3f) = %.3f \n",c,1/cosa(c));
                        fprintf(fptr,"\nsec(%.3f) = %.3f \n",c,1/cosa(c));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch1==5){
                        float s;
                        printf("------------------cosec0-----------------\n");
                        printf("\nEnter Thetha(in Radians) : ");
                        scanf("%f",&c);
                        printf("\ncosec(%.3f) = %.3f \n",c,1/(exponential(1-exponential(cosa(c),2),0.5)));
                        fprintf(fptr,"\ncosec(%.3f) = %.3f \n",c,1/(exponential(1-exponential(cosa(c),2),0.5)));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch1==6){
                        float s;
                        printf("------------------cot0-----------------\n");
                        printf("\nEnter Thetha(in Radians) : ");
                        scanf("%f",&c);
                        printf("\ncot(%.3f) = %.3f \n",c,cosa(c)/exponential(1-exponential(cosa(c),2),0.5));
                        fprintf(fptr,"\ncot(%.3f) = %.3f \n",c,cosa(c)/exponential(1-exponential(cosa(c),2),0.5));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch1==7){
                        continue;
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
                    printf("\n6. cot-1(x)");
                    printf("\n7. exit\n");
                    printf("\nEnter Choice : ");
                    scanf("%d",&ch2);
                    printf("\n");
                    if(ch2==1){
                        float s;
                        printf("-----------------cos-1(0)---------------\n");
                        printf("\nEnter Vaue[-1,1] : ");
                        scanf("%f",&c);
                        printf("\ncos-1(%.3f) = %.3f \n",c,1.57-sini(c));
                        fprintf(fptr,"\ncos-1(%.3f) = %.3f \n",c,1.57-sini(c));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch2==2){
                        float s;
                        printf("------------------sin-1(0)-----------------\n");
                        printf("\nEnter Value[-1,1] : ");
                        scanf("%f",&c);
                        printf("\nsin-1(%.3f) = %.3f \n",c,sini(c));
                        fprintf(fptr,"\nsin-1(%.3f) = %.3f \n",c,sini(c));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch2==3){
                        float s;
                        printf("------------------tan-1(0)-----------------\n");
                        printf("\nEnter Value : ");
                        scanf("%f",&c);
                        printf("\ntan-1(%.3f) = %.3f \n",c,tani(c));
                        fprintf(fptr,"\ntan-1(%.3f) = %.3f \n",c,tani(c));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch2==4){
                        float s;
                        printf("------------------sec-1(0)-----------------\n");
                        printf("\nEnter Value : ");
                        scanf("%f",&c);
                        printf("\nsec-1(%.3f) = %.3f \n",c,1/(1.57-sini(1/c)));
                        fprintf(fptr,"\nsec-1(%.3f) = %.3f \n",c,1/(1.57-sini(1/c)));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch2==5){
                        float s;
                        printf("------------------cosec-1(0)-----------------\n");
                        printf("\nEnter Value : ");
                        scanf("%f",&c);
                        printf("\ncosec-1(%.3f) = %.3f \n",c,sini(1/c));
                        fprintf(fptr,"\ncosec-1(%.3f) = %.3f \n",c,sini(1/c));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch2==6){
                        float s;
                        printf("------------------cot-1(0)-----------------\n");
                        printf("\nEnter Value : ");
                        scanf("%f",&c);
                        printf("\ncot-1(%.3f) = %.3f \n",c,1.57-tani(c));
                        fprintf(fptr,"\ncot-1(%.3f) = %.3f \n",c,1.57-tani(c));
                        fprintf(fptr,"%s\n",ctime(&t));
                        printf("\n \n");
                    }
                    else if(ch2==7){
                        continue;
                    }
                    else{
                        printf("\nWrong choice\n");
                    }
                }
            }
            else if(b==10){
                printf("----------------Quadratic-Equation--------------\n");
                printf("\nEnter Degree : ");
                scanf("%d",&e);
                int a = 0;
                for(int i=0;i<e+1;i++){
                    printf("Enter coeffecient of x^%d : ",i);
                    scanf("%f",&arr[i]);
                }
                printf("Enter Value of x : ");
                scanf("%f",&c);
                printf("\n");
                float sum = 0;
                for(int i=0;i<e+1;i++){
                    sum += arr[i]*exponential(c,i);
                }
                printf("Value of f(%.3f) = %.3f \n",c,sum);
                fprintf(fptr,"Value of f(%.3f) = %.3f \n",c,sum);
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
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
                        printf("\nVolume of Sphere = %.3f\n",4*(3.141)*r*r*r/3);
                        fprintf(fptr,"\nVolume of Sphere = %.3f\n",4*(3.141)*r*r*r/3);
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
                        l =exponential((r*r) + (h*h),0.5);
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
            scanf("%d",&b);
            printf("\n");
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
            else if(b==5){
                printf("-----------Modulus(|Z|)---------\n");
                printf("\nEnter Complex number(a+bi) : ");
                scanf("%f+%fi",&c,&d);
                printf("\nModulus of %.1f+%.1fi = %.1f \n",c,d,exponential((c*c+d*d),0.5));
                fprintf(fptr,"\nModulus of %.1f+%.1fi = %.1f \n",c,d,exponential((c*c+d*d),0.5));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
            else if(b==6){
                printf("-----------Argument---------\n");
                printf("\nEnter Complex number(a+bi) : ");
                scanf("%f+%fi",&c,&d);
                printf("\nArgument of %.1f+%.1fi = %.3f \n",c,d,tani(d/c));
                fprintf(fptr,"\nArgument of %.1f+%.1fi = %.3f \n",c,d,tani(d/c));
                fprintf(fptr,"%s\n",ctime(&t));
                printf("\n \n");
            }
        }
        else if(a==3){
            printf("\nHistory\n\n");
            fptr1 = fopen("file.txt","r");
            while(ch!=EOF){
                ch = fgetc(fptr1);
                printf("%c", ch);
            }
            printf("\n");
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
