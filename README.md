# Code for find Rate of current bill using c

```
#include <stdio.h>
#include <string.h>  
void main()
{  
    char cu_name[25]; // cu_name = Customer Name 
    int info;
    float unit, charge, ca_charge=0;
   printf("Input the name of the customer :");
   scanf("%s",cu_name);
   printf("Input the unit consumed by the customer : ");
   scanf("%f",&unit);
    
    if (unit <=50)
        { 
            charge =3.15;
            ca_charge+=unit * charge;
        } else if (unit <=100) 
        {
            info = unit - 50;
            ca_charge+= 3.15 * 50;
            charge =3.7;
            ca_charge+= info * charge;
        } else if (unit <=150) 
        {
            info = unit - 100;
            ca_charge+= 3.15 * 50;
            ca_charge+= 3.7 * 50;
            charge =4.8;
            ca_charge+= info * charge;
        } else if (unit <=200) 
        {
            info = unit - 150;
            ca_charge+= 3.15 * 50;
            ca_charge+= 3.7 * 50;
            ca_charge+= 4.8 * 50;
            charge =6.4;
            ca_charge+= info * charge;
        } else if (unit <=250) 
        {
            info = unit - 200;
            ca_charge+= 3.15 * 50;
            ca_charge+= 3.7 * 50;
            ca_charge+= 4.8 * 50;
            ca_charge+= 6.4 * 50;
            charge =7.6;
            ca_charge+= info * charge;
        }

   printf("\nElectricity Bill\n");
   printf("Customer Name                       :%s\n",cu_name);
   printf("unit used                           :%f\n",unit);
   printf("Charges                             :%f\n",ca_charge);

} 
```
