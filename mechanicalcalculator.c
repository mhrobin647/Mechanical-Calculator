#include<stdio.h>
#include<math.h>
void triangle_option()
{
    char l,v,o,al,av;
    printf("\t\t\t\tWHICH TOW INPUT YOU HAVE ?\n");
    printf("\t\t\t\t//////////////////////////////@\n");
    printf("\t\t\t\t//Do you have Opposite : ");
    fflush(stdin);
    scanf("%c",&l);

    printf("\t\t\t\t//Do you have Adjacent : ");
    fflush(stdin);
    scanf("%c",&v);
    printf("\t\t\t\t//Do you have Hypotenuse : ");
    fflush(stdin);
    scanf("%c",&o);
    printf("\t\t\t\t//Do you have Angle near Opposite : ");
    fflush(stdin);
    scanf("%c",&al);
    printf("\t\t\t\t//Do you have Angle near Adjacent : ");
    fflush(stdin);
    scanf("%c",&av);
    printf("\t\t\t\t//////////////////////////////////@\n\n");
    if(l=='y' && v=='y')

        lmb_vmi();
    else if(l=='y' && al=='y')
        angle_lmb();
    else if (l=='y' && o=='y')
        lombo_otivuj();
    else if(v=='y' && o=='y')
        vumi_otivuj();
    else if(v=='y' && av=='y')
        angle_vumi();

}

void angle_vumi()
{
    float a,v,tn,lmb,otivuj,area,poridhi;
    printf("\t\t\t\t\tEnter Angle :");
    fflush(stdin);
    scanf("%f",&a);
    printf("\t\t\t\t\tEnter Adjacent");
    fflush(stdin);
    scanf("%f",&v);
    a=a*(3.1416/180);
    lmb=tan(a)*v;
    tn=90-a;
    otivuj=sqrt(pow(lmb,2)+pow(v,2));
    area=.5*lmb*v;
    poridhi=lmb+v+otivuj;
    printf("\n\t\t\t\t/////////////////////////////////@\n");
    printf("\t\t\t\t//Opposite is %f\n",lmb);
    printf("\t\t\t\t//Hypotenuse is %f\n",otivuj);
    printf("\t\t\t\t//Another Angle is %f\n",tn);
    printf("\t\t\t\t//Area is %f\n",area);
    printf("\t\t\t\t//Circumference is %f\n",poridhi);
    printf("\t\t\t\t/////////////////////////////////@\n");
}

void vumi_otivuj()
{
    float o,v,tn,lmb,otivuj,area,poridhi,a;
    printf("\t\t\t\t\tEnter Hypotenuse :");
    fflush(stdin);
    scanf("%f",&o);
    printf("\t\t\t\t\tEnter Adjacent : ");
    fflush(stdin);
    scanf("%f",&v);
    lmb=sqrt(pow(o,2)-pow(v,2));
    a=atan(lmb/v);

    tn=90-a;

    area=.5*lmb*v;
    poridhi=lmb+v+o;
    printf("\n\t\t\t\t/////////////////////////////////@\n");
    printf("\t\t\t\t//Opposite is %f\n",lmb);
    printf("\t\t\t\t//Angle near Opposite is %f\n",a);
    printf("\t\t\t\t//Another Angle is %f\n",tn);
    printf("\t\t\t\t//Area is %f\n",area);
    printf(" \t\t\t\t//Circumference is %f\n",poridhi);
    printf("\t\t\t\t/////////////////////////////////@\n");
}

void lombo_otivuj()
{

    float o,v,tn,lmb,otivuj,area,poridhi,a;
    printf("\t\t\t\t\tEnter Hypotenuse : ");
    fflush(stdin);
    scanf("%f",&o);
    printf("\t\t\t\t\tEnter Opposite : ");
    fflush(stdin);
    scanf("%f",&lmb);
    v=sqrt(pow(o,2)-pow(lmb,2));
    a=atan(lmb/v);

    tn=90-a;

    area=.5*lmb*v;
    poridhi=lmb+v+o;
    printf("\n\t\t\t\t/////////////////////////////////@\n");
    printf("\t\t\t\t//Adjacent is %f\n",v);
    printf("\t\t\t\t//Angle near Opposite is %f\n",a);
    printf("\t\t\t\t//Another Angle is %f\n",tn);
    printf("\t\t\t\t//Area is %f\n",area);
    printf(" \t\t\t\t//Circumference is %f\n",poridhi);
    printf("\t\t\t\t/////////////////////////////////@\n");
}

void lmb_vmi()
{
    float o,v,tn,lmb,otivuj,area,poridhi,a;
    printf("\t\t\t\t\tEnter Adjacent : ");
    fflush(stdin);
    scanf("%f",&v);
    printf("\t\t\t\t\tEnter Opposite : ");
    fflush(stdin);
    scanf("%f",&lmb);
    o=sqrt(pow(lmb,2)+pow(v,2));
    a=atan(lmb/v);

    tn=90-a;

    area=.5*lmb*v;
    poridhi=lmb+v+o;
    printf("\n\t\t\t\t/////////////////////////////////@\n");
    printf("\t\t\t\t//Adjacent is %f\n",v);
    printf("\t\t\t\t//Angle near Opposite is %f\n",a);
    printf("\t\t\t\t//Another Angle is %f\n",tn);
    printf("\t\t\t\t//Area is %f\n",area);
    printf("\t\t\t\t//Circumference is %f\n",poridhi);
    printf("\t\t\t\t/////////////////////////////////@\n");
}

void angle_lmb()
{
    float o,v,tn,lmb,otivuj,area,poridhi,a;
    printf("\t\t\t\t\tEnter Angle : ");
    fflush(stdin);
    scanf("%f",&a);
    printf("\t\t\t\t\tEnter Opposite : ");
    fflush(stdin);
    scanf("%f",&lmb);



    v=lmb/tan(a);
    o=sqrt(pow(lmb,2)+pow(v,2));
    tn=90-a;

    area=.5*lmb*v;
    poridhi=lmb+v+o;
    printf("\n\t\t\t\t/////////////////////////////////@\n");
    printf("\t\t\t\t//adjacent is %f\n",v);
    printf("\t\t\t\t//Angle near Opposite is %f\n",a);
    printf("\t\t\t\t//Another Angle is %f\n",tn);
    printf("\t\t\t\t//Area is %f\n",area);
    printf("\t\t\t\t//Circumference is %f\n",poridhi);
    printf("\t\t\t\t/////////////////////////////////@\n");
}

void pipe_option()
{
    float radius,area,volume,high,poridhi,pi=3.1416,diameter;
    printf("\t\t\t\t\tEnter Radius : ");
    scanf("%f",&radius);
    printf("\t\t\t\t\tEnter High : ");
    scanf("%f",&high);
    area=pi*radius*radius;
    poridhi=2*pi*radius;
    diameter=radius*2;
    volume=pi*radius*radius*high;
     printf("\n\t\t\t\t/////////////////////////////////@\n");
    printf("\t\t\t\t//Area is %f\n",area);
    printf(" \t\t\t\t//Circumference is %f\n",poridhi);
    printf("\t\t\t\t//Diameter is %f\n",diameter);
    printf("\t\t\t\t//Volume is %f\n",volume);
     printf("\t\t\t\t/////////////////////////////////@\n");


}

int main()
{
    char opt;
    printf("\t\t\t\t@@-MACHANICAL CALCULATOR-@@\n\n");
    printf("\t\t\t\t/////////////////////////////////@\n");
    printf("\t\t\t\t//To Calculate Triangle Cress 'T' \n \t\t\t\t//To calculate Pipe press 'P' \n \t\t\t\t//Enter Here : ");
    scanf("%c",&opt);
    printf("\t\t\t\t////////////////////////////////@");
    printf("\n\n");
    switch(opt)
    {
    case 't' :
        triangle_option();
        break;
    case 'p':
        pipe_option();
        break;
    }
}
