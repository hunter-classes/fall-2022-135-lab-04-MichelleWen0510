/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 4 Task A,B,C,D,E,F,G

Functions for Task A,B,C,D,E,F,G.
*/

#include <iostream>
#include "functions.h"

std::string box(int width, int height)
{
	std::string box;
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			box=box+"*";
		}
		box=box+"\n";
	}
	return box;
}

std::string checkerboard(int width, int height)
{
	std::string board;
	for(int i=0;i<height;i++)
        {
                for(int j=0;j<(width/2)+1;j++)
                {
                        if(i%2==1 && j==0)
			{
				board=board+" * ";
				j++;
			} else {
				board=board+"* ";
			}
                }
                board=board+"\n";
        }
	return board;	
}

std::string cross(int size)
{
	int fPos=0;
	int lPos=size-1;
	std::string cross;
	for(int i=0;i<=size-1;i++)
        {
                for(int j=0;j<=size-1;j++)
                {
                	if(j==fPos || j==lPos)
			{
				cross=cross+"*";
			} else {
				cross=cross+" ";
			}
			
                }
		fPos++;
		lPos--;
                cross=cross+"\n";
        }
	return cross;	
}

std::string lower(int length)
{
	std::string lower;
	int num=1;
	for(int i=0;i<length;i++)
        {
                for(int j=0;j<num;j++)
		{
			lower=lower+"*";
		}
		num++;
                lower=lower+"\n";
        }

	return lower;
}

std::string upper(int length)
{
	std::string upper;
	int num=0;
        for(int i=0;i<length;i++)
        {
                for(int j=0;j<length;j++)
                {
                	if(j<num)
			{
				upper=upper+" ";
			} else {
				upper=upper+"*";
                	}
		}
                num++;
                upper=upper+"\n";
        }
	return upper;
}

std::string trapezoid(int width, int height)
{
	std::string tra;
	int space=0;
	for(int i=0;i<height;i++)
        {
                for(int j=0;j<width;j++)
                {
                        if(j<space || j>=width-space)
			{
				tra=tra+" ";
                	} else {
				tra=tra+"*";
			}
		}
		space++;
                tra=tra+"\n";
        }
	if(width-(height*2)<0)
	{
		return "Impossible Shape!";
	} else {
		return tra;
	}
}

std::string checkerboard3x3(int width, int height)
{
	std::string b3x3;               
	return b3x3;
}
