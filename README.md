# Code for find Rate of current bill using c


```
#include <stdio.h> 
void main()
{  
    char cu_name[25]; // cu_name = Customer Name 
    int info, surchg;
    float unit, charge, ca_charge=0, tt_amout;
   printf("Input the name of the customer :");
   scanf("%s",cu_name);
   printf("Input the unit consumed by the customer : ");
   scanf("%f",&unit);
    
    if (unit <=50)
        { 
            charge =3.15;
            ca_charge+=unit * charge;
        } else if (unit <=101) 
        {
            info = unit - 51;
            ca_charge+= 3.15 * 50;
            charge =3.7;
            ca_charge+= info * charge;
        } else if (unit <=151) 
        {
            info = unit - 101;
            ca_charge+= 3.15 * 50;
            ca_charge+= 3.7 * 50;
            charge =4.8;
            ca_charge+= info * charge;
        } else if (unit <=201) 
        {
            info = unit - 151;
            ca_charge+= 3.15 * 50;
            ca_charge+= 3.7 * 50;
            ca_charge+= 4.8 * 50;
            charge =6.4;
            ca_charge+= info * charge;
        } else if (unit <=251) 
        {
            info = unit - 201;
            ca_charge+= 3.15 * 50;
            ca_charge+= 3.7 * 50;
            ca_charge+= 4.8 * 50;
            ca_charge+= 6.4 * 50;
            charge =7.6;
            ca_charge+= info * charge;
        }
    surchg = 80;
    tt_amout = ca_charge + surchg;
   printf("\nElectricity Bill\n");
   printf("Customer Name                       :%s\n",cu_name);
   printf("Unit used                           :%f\n",unit);
   printf("Energr charge                       :%f\n",ca_charge);
   printf("Surchage Amount                     :%d\n",surchg);
   printf("Tottal Amount                       :%f\n",tt_amout);

} 
```
