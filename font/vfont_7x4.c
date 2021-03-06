/*
	FONT_0704.c
	Customized ASCII 7x4 Font of Dot Matrix

	Created on: 2012-01-25
	Updated on: 2012-05-14

	library for Arduino for Dot Matrix Display, support driver by 74HC595 and 74HC138, ST7920, HD47780
	Author: Weihong Guan
	Blog: http://aguegu.net
	E-mail: weihong.guan@gmail.com
	Code license: Attribution-NonCommercial-ShareAlike 3.0 Unported (CC BY-NC-SA 3.0)
	http://creativecommons.org/licenses/by-nc-sa/3.0/

	source host: https://github.com/aguegu/dot-matrix
 */

#include "vfont_7x4.h"

const uint8_t PROGMEM VFONT_7X4_STATE[] = {4, 7, 0x20, 0x60};


const uint8_t PROGMEM VFONT_7X4[] =
{
	0x00, 0x00, 0x00, 0x00, 	// Space
	0x5f, 0x00, 0x00, 0x00, 	// !
	0x03, 0x00, 0x03, 0x00, 	// "
	0x28, 0x7c, 0x28, 0x00,		// #
	0x2e, 0x6b, 0x3a, 0x00, 	// $
	0x48, 0x20, 0x10, 0x48, 	// %
	0x36, 0x49, 0x26, 0x50, 	// &
	0x03, 0x00, 0x00, 0x00, 	// '

	0x1c, 0x22, 0x41, 0x00, 	// (
	0x41, 0x22, 0x1c, 0x00, 	// )
	0x0a, 0x04, 0x0a, 0x00, 	// *
	0x04, 0x0e, 0x04, 0x00, 	// +
	0x60, 0x00, 0x00, 0x00, 	// ,
	0x04, 0x04, 0x04, 0x00, 	// -
	0x40, 0x00, 0x00, 0x00, 	// .
	0x60, 0x18, 0x06, 0x00, 	// /

	0x7f, 0x41, 0x7f, 0x00,  	// 0
	0x42, 0x7f, 0x40, 0x00, 	// 1
	0x7d, 0x45, 0x47, 0x00,		// 2
	0x45, 0x45, 0x7f, 0x00,		// 3
	0x3f, 0x20, 0x7f, 0x00, 	// 4
	0x47, 0x45, 0x7d, 0x00,		// 5
	0x7f, 0x45, 0x7d, 0x00,		// 6
	0x01, 0x01, 0x7f, 0x00,		// 7

	0x7f, 0x45, 0x7f, 0x00,		// 8
	0x5f, 0x51, 0x7f, 0x00,		// 9
	0x50, 0x00, 0x00, 0x00, 	// :
	0x68, 0x00, 0x00, 0x00, 	// ;
	0x08, 0x14, 0x22, 0x00, 	// <
	0x14, 0x14, 0x14, 0x00, 	// =
	0x22, 0x14, 0x08, 0x00, 	// >
	0x59, 0x0f, 0x00, 0x00, 	// ?

	0x7a, 0x5a, 0x42, 0x7e, 	// @
	0x7f, 0x21, 0x7f, 0x00,		// A
	0x7f, 0x45, 0x47, 0x7c, 	// B
	0x7f, 0x41, 0x63, 0x00,		// C
	0x7f, 0x41, 0x41, 0x3e, 	// D
	0x7f, 0x45, 0x45, 0x00,  	// E
	0x7f, 0x05, 0x05, 0x00, 	// F
	0x7f, 0x41, 0x7d, 0x00,		// G
	0x7f, 0x04, 0x7f, 0x00,		// H
	0x41, 0x7f, 0x41, 0x00, 	// I
	0x40, 0x41, 0x7f, 0x01, 	// J
	0x7f, 0x04, 0x0a, 0x71, 	// K
	0x7f, 0x40, 0x40, 0x00, 	// L
	0x7f, 0x01, 0x07, 0x7c,		// M
	0x7f, 0x01, 0x7f, 0x00,		// N
	0x7f, 0x41, 0x7f, 0x00,		// O

	0x7f, 0x21, 0x3f, 0x00, 	// P
	0x7f, 0x41, 0x21, 0x5f, 	// Q
	0x7f, 0x09, 0x79, 0x4f, 	// R
	0x47, 0x45, 0x7d, 0x00,  	// S
	0x01, 0x7f, 0x01, 0x00, 	// T
	0x7F, 0x40, 0x7f, 0x00,		// U
	0x7f, 0x20, 0x10, 0x0f, 	// V
	0x7f, 0x40, 0x70, 0x1f, 	// W
	0x7b, 0x0e, 0x7b, 0x00, 	// X
	0x07, 0x7c, 0x07, 0x00, 	// Y
	0x79, 0x45, 0x43, 0x00, 	// Z
	0x7f, 0x41, 0x00, 0x00, 	// [
	0x06, 0x18, 0x60, 0x00, 	// "\"
	0x41, 0x7f, 0x00, 0x00, 	// ]
	0x02, 0x01, 0x02, 0x00, 	// ^
	0x40, 0x40, 0x40, 0x00, 	// _

	0x01, 0x02, 0x00, 0x00, 	// `
	0x74, 0x54, 0x7c, 0x00, 	// a
	0x7f, 0x44, 0x7c, 0x00, 	// b
	0x7c, 0x44, 0x44, 0x00, 	// c
	0x7c, 0x44, 0x7f, 0x00, 	// d
	0x7c, 0x54, 0x5c, 0x00, 	// e
	0x04, 0x7f, 0x05, 0x00, 	// f
	0x5c, 0x54, 0x7c, 0x00, 	// g
	0x7f, 0x04, 0x7c, 0x00, 	// h
	0x7d, 0x00, 0x00, 0x00,  	// i
	0x40, 0x7d,	0x00, 0x00, 	// j
	0x7f, 0x10, 0x6c, 0x00, 	// k
	0x7f, 0x40, 0x00, 0x00, 	// l

	0x7c, 0x04, 0x1c, 0x70,		// m
	0x7c, 0x04, 0x7c, 0x00, 	// n
	0x7c, 0x44, 0x7c, 0x00, 	// o
	0x7c, 0x24, 0x3c, 0x00, 	// p
	0x3c, 0x24, 0x7c, 0x00, 	// q
	0x7c, 0x04, 0x04, 0x00, 	// r
	0x5c, 0x54, 0x74, 0x00, 	// s
	0x04, 0x7e, 0x44, 0x00, 	// t
	0x7c, 0x40, 0x7c, 0x00, 	// u
	0x7c, 0x20, 0x1c, 0x00, 	// v
	0x7c, 0x40, 0x70, 0x1c,		// w
	0x6c, 0x10, 0x6c, 0x00, 	// x
	0x5c, 0x50, 0x7c, 0x00, 	// y
	0x64, 0x54, 0x4c, 0x00, 	// z

	0x08, 0x7f, 0x41, 0x00, 	// {
	0x7f, 0x00, 0x00, 0x00, 	// |
	0x41, 0x7f, 0x08, 0x00, 	// }
	0x01, 0x03, 0x02, 0x00, 	// ~
	0x7f, 0x7f, 0x7f, 0x00, 	// Full Filled

};
