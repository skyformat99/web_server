/*************************************************************************
	> File Name: main.cpp
	> Author: 朱紫钰
	> Mail: zhuziyu1157817544@gmail.com
	> Created Time: 2017年10月23日 星期一 20时11分35秒
 ************************************************************************/

#include<iostream>
#include"server_base.h"
#include"parajudge.h"
#include"hong.h"
using namespace std;
int main(int argc,char *argv[])
{
    server_base bs;
    int ret_para;
    switch(argc){
        case 1:
        case 2:
        case 3:ret_para = parajudge(argc,argv,bs);break;
        default:return 0;
    }
    
    switch(ret_para){
        case Default_start: break;
        case Help:return 0;
        case Version:return 0;
        case Conf:return 0;
        case Stop:return 0;
        case Conf_change:break;
    }
}