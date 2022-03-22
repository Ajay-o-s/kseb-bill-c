#include <stdio.h> 
void main()
{  
    char cu_name[25]; // cu_name = Customer Name 
    int info, phase;
    float unit, bp_ap, duty, charge, ca_charge=0, tt_amout;
    printf("1phase or 3phase replay with 1 or 3 : ");
   scanf("%d",&phase);
   printf("Input the name of the customer : ");
   scanf("%s",cu_name);
   printf("Input the unit consumed by the customer : ");
   scanf("%f",&unit);
    printf(" BPL or Apl if BPL then enter 1 or APL then enter 2 : ");
   scanf("%f",&bp_ap);
   
   
    if (unit <= 40 && bp_ap == 1 && phase == 1)
        {
            charge = 1.5;
            ca_charge+= unit * charge;
        }
    else if (unit <= 50 && phase == 1)
        {
            charge = 3.15;
            ca_charge+= unit * charge;
        }
    else if (unit <=101 && phase == 1)
        {
            info = unit - 51;
            charge = 3.7;
            ca_charge+= info * charge + 3.15 * 50;
        }
    else if (unit <=151 && phase == 1)
        {
            info = unit - 101;
            charge = 4.8;
            ca_charge+= info * charge + 3.15 * 50 + 4.8 * 50;
        }
    else if (unit <=201 && phase == 1)
        {
            info = unit - 151;
            charge = 6.4;
            ca_charge+= info * charge + 3.15 * 50 + 4.8 * 50 + 4.8 * 50;
        }
    else if (unit <=251 && phase == 1)
        {
            info = unit - 201;
            charge = 7.6;
            ca_charge+= info * charge + 3.15 * 50 + 4.8 * 50 + 4.8 * 50 + 6.4 * 50;
        }
    else if (unit <=300 && phase == 1)
        {
            charge = 5.8;
            ca_charge+= unit * charge;
        }
    else if (unit <=350 && phase == 1)
        {
            charge = 6.6;
            ca_charge+= unit * charge;
        }
    else if (unit <=400 && phase == 1)
        {
            charge = 6.9;
            ca_charge+= unit * charge;
        }
    else if (unit <=500 && phase == 1)
        {
            charge = 7.1;
            ca_charge+= unit * charge;
        }
    else if (unit >=501 && phase == 1)
        {
            charge = 7.9;
            ca_charge+= unit * charge;
        }
    duty = unit * 0.1;
    printf("\nElectricity Bill\n");
    printf("Customer Name                       : %s\n",cu_name);
    if (bp_ap == 1)
        printf("BPL OR APL                          : BPL\n");
    else
    
        printf("BPL OR APL                          : APL\n");
    if (phase == 1)
        printf("PHASE                               : 1 PHASE \n");
    else
        printf("PHASE                               : 3 PHASE \n");
    printf("unit used                           : %f\n",unit);
    printf("Energr charge                       : %f\n",ca_charge);
    printf("Surchage Amount                     : %f \n",duty);
    printf("METER rent                          : 14.28 \n");
    printf("DUTY                                : %f \n",duty);
    ca_charge+= duty + duty + 14.28;
    printf("Tottal Amount                       : %f\n",ca_charge);

} 
