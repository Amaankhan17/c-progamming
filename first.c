#include <stdio.h>
int main(){
    /*
    Name=Amaan Khan
    Div=C
    Class Computer=229
    UIN=251P045
    */

    int physics_marks,chemistry_marks,maths_marks;
    printf("Enter the marks of physics :");
    scanf("%d", &physics_marks);
    printf("Enter the marks of chemistry :");
    scanf("%d", &chemistry_marks);
    printf("Enter the marks of maths :");
    scanf("%d", &maths_marks);
    int sum=physics_marks+chemistry_marks+maths_marks;
    printf("sum=%d\n",sum);
    float average=sum/3;
    printf("average=%f\n", average);
    (average >= 50)? printf("Student is eligible"):printf("Student is not eligible");


    return 0;

}