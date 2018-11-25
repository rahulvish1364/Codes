//bouncing ball with multiple balls.

#include<graphics.h>
#include<stdlib.h>
#define ANG 2
struct circl
{
int x,y,radius,l,t,xr,yr;
};
struct circl recalculate(struct circl cc)
{
    if(cc.l>=getmaxx()||cc.l<=0)
    {
        cc.x*=-1;
        cc.l=cc.l<=0?0:getmaxx();
        cc.xr=random(ANG)+1;
        cc.yr=random(ANG)+1;
    }
    if(cc.t>=getmaxy()||cc.t<=0)
    {
        cc.y*=-1;
        cc.t=cc.t<=0?0:getmaxy();
        cc.xr=random(ANG)+1;
        cc.yr=random(ANG)+1;
    }
    cc.l+=(cc.x*cc.xr);
    cc.t+=(cc.y*cc.yr);
return cc;
}
struct circl init()
{
    struct circl cc;               cc.l=getmaxx()/2;cc.t=random(500);cc.x=1;cc.y=1;cc.xr=5;cc.yr=10;
    return cc;
}
void main()
{
    int gm,gd=DETECT,i;
    struct circl c[10];
    initgraph(&gd,&gm,"");
    for(i=0;i<=10;i++)
    c[i]=init();
    while(!kbhit())
    {
        for(i=0;i<=10;i++)
        fillellipse(c[i].l,c[i].t,10,10);
        delay(10);
        for(i=0;i<=10;i++)
        c[i]=recalculate(c[i]);
        cleardevice();
    }
    closegraph();
}
