#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    if(u<=199)
    {
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.20
");
        printf("Bill: %.2f
",u*1.20);
        printf("Surcharge: 0.00
");
        printf("Total Amount: %.2f
",u*1.20); 
    }
    else if(u>=200 && u<400)
    {
       printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.40
");
        printf("Bill: %.2f
",u*1.40);
        printf("Surcharge: 0.00
");
        printf("Total Amount: %.2f
",u*1.40);  
    }
    else if(u>=400 && u<600)
    {
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.60
");
        printf("Bill: %.2f
",u*1.60);
        printf("Surcharge: %.2f
",u*1.60*0.15);
        printf("Total Amount: %.2f
",(u*1.60)+(u*1.60*0.15)); 
   }
   else if(u>=600 && u<800)
   {
       printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 1.80
");
        printf("Bill: %.2f
",u*1.80);
        printf("Surcharge: %.2f
",u*1.80*0.15);
        printf("Total Amount: %.2f
",(u*1.80)+(u*1.80*0.15)); 
   }
   else if(u>=800)
   {
       printf("Units Consumed: %d
",u);
        printf("Cost per Unit: 2.00
");
        printf("Bill: %.2f
",u*2.00);
        printf("Surcharge: %.2f
",u*2.00*0.15);
        printf("Total Amount: %.2f
",(u*2.00)+(u*2.00*0.15)); 
   }
   
    
}