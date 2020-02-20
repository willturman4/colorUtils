 /*Programmer's Name:William Turman
  NUID: 05032615
  Date: 1/28/2020
  Description of the program: Tax program that can calculate the taxes with number of children
  
*/

#include<stdio.h>
#include<math.h>
#include "colorUtils.h"

typedef enum {NO_ERROR,
			NULL_POINTER_ERROR, 
			OUT_OF_RANGE_ERROR}
			error;
	


int rgbToCMYK(int r, int g, int b, double *c, double *m, double *y, double *k) {
	double *rPrime, *gPrime, *bPrime;
	double max;
	
	*rPrime = r/255;
	*gPrime = g/255;
	*bPrime = b/255;
	
	if (rPrime < gPrime) {
		max=gPrime;
	}else {
		max=rPrime;
	}
	
	if (bPrime>max){
		max=bPrime;
	}
	
	*k = 1-max
	
	*c = ((1-rPrime-*k)/(1-*k));
	*m = ((1-gPrime-*k)/(1-*k));
	*y = ((1-bPrime-*k)/(1-*k));
	
	if(c<0) {
		c=0
	return OUT_OF_RANGE_ERROR;
	}else if(c==NULL){
		return NULL_POINTER_ERROR;
	}else if(c<1 && c>0){
		return NO_ERROR;
	}
	
	if(m<0) {
		m=0
		return OUT_OF_RANGE_ERROR;
	}else if(m==NULL){
		return NULL_POINTER_ERROR;
	}else if(m<1 && m>0){
		return NO_ERROR;
	}
	
	if(y<0) {
		y=0
		return OUT_OF_RANGE_ERROR;
	}else if(y==NULL){
		return NULL_POINTER_ERROR;
	}else if(y<1 && y>0){
		return NO_ERROR;
	}
}
int cmykToRGB(double c, double m, double y, double k, int *r, int *g, int *b) {
	
	*r = 255*(1-c)*(1-*k);
	*g = 255*(1-m)*(1-*k);
	*b = 255*(1-y)*(1-*k);
	
	if(r<0||b<0||g<0){
		return OUT_OF_RANGE_ERROR;
	}
	
	if(r>255) {
		r=255
		return OUT_OF_RANGE_ERROR;
	}else if(r==NULL){
		return NULL_POINTER_ERROR;
	}else if(r<1 && r>0){
		return NO_ERROR;
	}
	if(g>255) {
		g=255
		return OUT_OF_RANGE_ERROR;
	}else if(g==NULL){
		return NULL_POINTER_ERROR;
	}else if(g<255 && g>0){
		return NO_ERROR;
	}
	if(b>255) {
		b=255
		return OUT_OF_RANGE_ERROR;
	}else if(b==NULL){
		return NULL_POINTER_ERROR;
	}else if(b<255 && b>0){
		return NO_ERROR;
	}
}






















