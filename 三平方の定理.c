#include<stdio.h>
#include<math.h>
main()
{
	double a=0,b=0,c=0,aa=0,bb=0,cc=0,aaa=0,bbb=0,ccc=0,youzyo=0;//a系:鉤、b系:股、c系:弦
	
	
	puts("|||||c:弦を求める|||||");
	
	printf("a:鉤,b:股を入力　　");
	scanf("%lf%lf",a,b);
	
	youzyo=sqrt(a*a+b*b);
	c=youzyo;
	
	printf("c:弦=%f\n\n",c);
	
	youzyo=0;
	
	
	puts("|||||a:鉤を求める|||||");
	
	printf("b:股,c:弦を入力　　");
	scanf("%lf%lf",bb,cc);

	youzyo=sqrt(cc*cc-bb*bb);
	aa=youzyo;
	
	printf("a:鉤=%f\n\n",aa);
	
	youzyo=0;
	
	
	puts("|||||b:股を求める|||||");
	
	printf("c:弦,a:鉤を入力　　");
	scanf("%lf%lf",ccc,aaa);
	
	youzyo=sqrt(ccc*ccc-aaa*aaa);
	bbb=youzyo;
	
	printf("b:股=%f\n\n",bbb);
	
	youzyo=0;
	
	
	a=0;b=0;c=0;
	aa=0;bb=0;cc=0;
	aaa=0;bbb=0;ccc=0;
	return 0;
}
