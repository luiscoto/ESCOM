{\rtf1\ansi\ansicpg1252\paperw11900\paperh16840\margl1440\margr1440\margt1440\margb1440\vieww18540\viewh17280\viewscale100\lin0\rin0
{\papercolor16777215}
{\fonttbl\f0\fnil\fcharset0 Helvetica;}
{\colortbl\red0\green0\blue0;\red255\green255\blue255;}
\pard
{\*\pageHeader Helvetica::12px::right::black::0.5::NO::Header Author: Zoe Appleseed [date] - Page [pagenumber] of [totalpages]}
{\*\pageFooter Helvetica::12px::right::black::0.5::NO::Footer Author: Zoe Appleseed [title] - Page [pagenumber] of [totalpages]}
{\*\background {\shp{\*\shpinst\shpleft0\shptop0\shpright0\shpbottom0\shpfhdr0\shpbxmargin\shpbymargin\shpwr0\shpwrk0\shpfblwtxt1\shpz0\shplid1025{\sp{\sn shapeType}{\sv 1}}{\sp{\sn fFlipH}{\sv 0}}{\sp{\sn fFlipV}{\sv 0}}{\sp{\sn fillColor}{\sv 16777215}}{\sp{\sn fFilled}{\sv 1}}{\sp{\sn lineWidth}{\sv 0}}{\sp{\sn fLine}{\sv 0}}{\sp{\sn bWMode}{\sv 9}}{\sp{\sn fBackground}{\sv 1}}}}}
\fi357
\f0\fs24 \cf0 //Luis Fernando Ramirez Cotonieto -- 2CM6// Probabilidad y Estadistica#include stdio.h>#include stdlib.h>#include time.h>void main()         //Declaraciones         int x;         int monedas;         int Aguila=0,Sol=0;         //Funcion que nos generara los numeros aleatorios acorde a nuestro reloj, para que siempre sea distinto         srand((unsigned)time(NULL));         printf("Este programa simula el lanzamiento de determinado numero de monedad para poder visualizar cuantas caen en Sol y cuantas en Aguila.");         printf("Cuantas monedas lanzaremos al mismo tiempo?: ");         scanf("%d",&monedas); //Lectura del numero de monedas         for(int i=1;i=monedas;i++)                   x=rand()%(2);                   if(x==1)                            Aguila++;                   else                            Sol++;                                     printf("Aguila ha salido en %d monedas.",Aguila);         printf("Sol ha salido en %d monedas.",Sol);\
}