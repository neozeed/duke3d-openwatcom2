/*
Copyright (C) 1994-1995 Apogee Software, Ltd.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
typedef struct
   {
   unsigned char SAVEK[ 2 ];
   unsigned char Level[ 2 ];
   unsigned char Env1[ 2 ];
   unsigned char Env2[ 2 ];
   unsigned char Wave[ 2 ];
   unsigned char Feedback;
   } TIMBRE;

typedef struct
   {
   unsigned char Timbre;
   unsigned char Key;
   } DRUM_MAP;

DRUM_MAP PercussionTable[ 128 ] =
   {
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 163, 36 },
      { 164, 36 }, { 165, 36 }, { 166, 36 }, { 167, 48 },
      { 168, 36 }, { 169, 48 }, { 170, 69 }, { 171, 52 },
      { 172, 48 }, { 173, 55 }, { 174, 57 }, { 175, 58 },
      { 176, 60 }, { 177, 62 }, { 178, 63 }, { 179, 70 },
      { 180, 70 }, { 181, 53 }, { 182, 48 }, { 183, 84 },
      { 184, 43 }, { 185, 56 }, { 186, 24 }, { 187, 65 },
      { 128, 0 }, { 128, 0 }, { 190, 48 }, { 191, 51 },
      { 192, 54 }, { 193, 42 }, { 194, 39 }, { 128, 0 },
      { 128, 0 }, { 197, 64 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 201, 52 }, { 202, 52 }, { 203, 60 },
      { 204, 66 }, { 205, 59 }, { 206, 91 }, { 128, 0 },
      { 128, 0 }, { 209, 109 }, { 210, 64 }, { 211, 79 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 },
      { 128, 0 }, { 128, 0 }, { 128, 0 }, { 128, 0 }
   };

TIMBRE ADLIB_TimbreBank[ 256 ] =
   {
      { { 33, 49 }, { 79, 0 }, { 242, 210 }, { 82, 115 }, { 0, 0 }, 6 },
      { { 19, 17 }, { 198, 10 }, { 242, 241 }, { 245, 245 }, { 1, 0 }, 0 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 3, 18 }, { 48, 16 }, { 246, 242 }, { 25, 244 }, { 0, 0 }, 15 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 24, 129 }, { 98, 0 }, { 243, 242 }, { 230, 246 }, { 0, 0 }, 0 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 23, 2 }, { 79, 16 }, { 242, 242 }, { 96, 114 }, { 0, 0 }, 8 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 178, 176 }, { 192, 128 }, { 159, 148 }, { 6, 15 }, { 1, 1 }, 9 },
      { { 178, 176 }, { 192, 134 }, { 159, 148 }, { 6, 15 }, { 1, 1 }, 9 },
      { { 36, 49 }, { 79, 0 }, { 242, 82 }, { 11, 11 }, { 0, 0 }, 14 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 35, 33 }, { 72, 0 }, { 149, 132 }, { 25, 25 }, { 1, 0 }, 8 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 19, 49 }, { 150, 128 }, { 254, 242 }, { 33, 148 }, { 0, 0 }, 10 },
      { { 1, 17 }, { 77, 0 }, { 242, 245 }, { 83, 116 }, { 1, 1 }, 8 },
      { { 33, 40 }, { 1, 9 }, { 148, 148 }, { 25, 9 }, { 0, 0 }, 6 },
      { { 33, 40 }, { 1, 19 }, { 148, 148 }, { 25, 9 }, { 0, 0 }, 6 },
      { { 36, 194 }, { 138, 3 }, { 250, 145 }, { 111, 248 }, { 0, 0 }, 8 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 33 }, { 26, 0 }, { 241, 246 }, { 207, 72 }, { 0, 0 }, 10 },
      { { 1, 34 }, { 29, 0 }, { 183, 196 }, { 34, 55 }, { 0, 0 }, 14 },
      { { 49, 34 }, { 30, 0 }, { 242, 241 }, { 239, 104 }, { 0, 0 }, 14 },
      { { 49, 34 }, { 30, 0 }, { 242, 245 }, { 239, 120 }, { 0, 0 }, 14 },
      { { 49, 34 }, { 30, 0 }, { 242, 245 }, { 239, 120 }, { 0, 0 }, 14 },
      { { 17, 49 }, { 5, 9 }, { 249, 241 }, { 37, 52 }, { 0, 0 }, 10 },
      { { 17, 49 }, { 5, 0 }, { 249, 241 }, { 37, 52 }, { 0, 0 }, 10 },
      { { 49, 114 }, { 138, 0 }, { 213, 97 }, { 25, 27 }, { 0, 0 }, 12 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 17, 17 }, { 150, 128 }, { 165, 245 }, { 85, 179 }, { 2, 1 }, 12 },
      { { 1, 17 }, { 156, 128 }, { 128, 240 }, { 5, 6 }, { 0, 0 }, 0 },
      { { 17, 17 }, { 150, 128 }, { 165, 245 }, { 85, 179 }, { 2, 1 }, 12 },
      { { 2, 1 }, { 153, 128 }, { 245, 246 }, { 85, 83 }, { 0, 0 }, 0 },
      { { 192, 0 }, { 13, 0 }, { 165, 212 }, { 67, 35 }, { 2, 1 }, 0 },
      { { 33, 32 }, { 88, 0 }, { 194, 97 }, { 227, 22 }, { 1, 3 }, 0 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 34 }, { 22, 0 }, { 176, 179 }, { 129, 44 }, { 0, 1 }, 12 },
      { { 49, 114 }, { 91, 131 }, { 244, 138 }, { 21, 5 }, { 0, 0 }, 0 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 33 }, { 29, 0 }, { 113, 129 }, { 174, 158 }, { 0, 0 }, 14 },
      { { 49, 97 }, { 28, 128 }, { 65, 146 }, { 11, 59 }, { 0, 0 }, 14 },
      { { 49, 241 }, { 28, 0 }, { 65, 146 }, { 11, 27 }, { 0, 0 }, 10 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 33 }, { 155, 0 }, { 97, 127 }, { 106, 10 }, { 0, 0 }, 2 },
      { { 225, 226 }, { 21, 3 }, { 113, 129 }, { 174, 158 }, { 0, 0 }, 14 },
      { { 33, 33 }, { 29, 0 }, { 113, 129 }, { 174, 158 }, { 0, 0 }, 14 },
      { { 33, 33 }, { 77, 0 }, { 84, 166 }, { 60, 28 }, { 0, 0 }, 8 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 50 }, { 79, 0 }, { 113, 82 }, { 83, 76 }, { 0, 0 }, 10 },
      { { 33, 50 }, { 79, 0 }, { 113, 82 }, { 83, 76 }, { 0, 0 }, 10 },
      { { 32, 49 }, { 78, 0 }, { 113, 82 }, { 104, 94 }, { 0, 0 }, 10 },
      { { 33, 33 }, { 75, 0 }, { 170, 143 }, { 22, 10 }, { 1, 0 }, 8 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 50, 97 }, { 154, 130 }, { 81, 162 }, { 27, 59 }, { 0, 0 }, 12 },
      { { 50, 33 }, { 192, 0 }, { 155, 114 }, { 33, 7 }, { 0, 0 }, 4 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 162 }, { 131, 141 }, { 116, 101 }, { 23, 23 }, { 0, 0 }, 7 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 225, 98 }, { 236, 0 }, { 110, 101 }, { 143, 42 }, { 0, 0 }, 14 },
      { { 50, 33 }, { 144, 0 }, { 155, 114 }, { 33, 23 }, { 0, 0 }, 4 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 245, 242 }, { 154, 128 }, { 12, 96 }, { 199, 165 }, { 0, 0 }, 13 },
      { { 98, 161 }, { 147, 0 }, { 119, 118 }, { 7, 7 }, { 0, 0 }, 11 },
      { { 34, 33 }, { 89, 8 }, { 255, 255 }, { 3, 15 }, { 2, 0 }, 0 },
      { { 33, 33 }, { 29, 0 }, { 113, 129 }, { 14, 14 }, { 0, 0 }, 14 },
      { { 34, 33 }, { 70, 128 }, { 134, 100 }, { 85, 24 }, { 0, 0 }, 0 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 113, 114 }, { 93, 0 }, { 84, 106 }, { 1, 3 }, { 0, 0 }, 0 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 0, 17 }, { 13, 128 }, { 241, 80 }, { 255, 255 }, { 0, 0 }, 6 },
      { { 33, 97 }, { 137, 3 }, { 17, 66 }, { 51, 37 }, { 0, 0 }, 10 },
      { { 0, 49 }, { 16, 128 }, { 17, 176 }, { 239, 15 }, { 0, 0 }, 10 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 164, 97 }, { 76, 16 }, { 243, 129 }, { 115, 35 }, { 1, 0 }, 4 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 1, 1 }, { 0, 0 }, { 255, 255 }, { 7, 7 }, { 0, 0 }, 7 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 1, 221 }, { 0, 0 }, { 246, 31 }, { 0, 6 }, { 2, 3 }, 12 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 1, 1 }, { 63, 63 }, { 255, 255 }, { 255, 255 }, { 2, 0 }, 12 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 16, 17 }, { 68, 0 }, { 248, 243 }, { 119, 6 }, { 2, 0 }, 8 },
      { { 16, 17 }, { 68, 0 }, { 248, 243 }, { 119, 6 }, { 2, 0 }, 8 },
      { { 3, 15 }, { 0, 0 }, { 251, 245 }, { 43, 11 }, { 2, 0 }, 15 },
      { { 33, 0 }, { 128, 0 }, { 255, 249 }, { 7, 7 }, { 0, 1 }, 14 },
      { { 240, 229 }, { 192, 0 }, { 255, 251 }, { 255, 240 }, { 3, 0 }, 14 },
      { { 33, 0 }, { 128, 0 }, { 255, 248 }, { 10, 25 }, { 0, 1 }, 14 },
      { { 1, 0 }, { 0, 0 }, { 250, 242 }, { 124, 4 }, { 0, 0 }, 0 },
      { { 12, 18 }, { 0, 0 }, { 246, 251 }, { 8, 71 }, { 0, 2 }, 10 },
      { { 1, 0 }, { 0, 0 }, { 250, 242 }, { 124, 4 }, { 0, 0 }, 0 },
      { { 14, 0 }, { 64, 8 }, { 118, 119 }, { 79, 24 }, { 0, 2 }, 14 },
      { { 1, 0 }, { 0, 0 }, { 250, 242 }, { 124, 4 }, { 0, 0 }, 0 },
      { { 2, 5 }, { 3, 10 }, { 180, 151 }, { 4, 247 }, { 0, 0 }, 14 },
      { { 1, 0 }, { 0, 0 }, { 250, 242 }, { 124, 4 }, { 0, 0 }, 0 },
      { { 1, 0 }, { 0, 0 }, { 250, 242 }, { 124, 4 }, { 0, 0 }, 0 },
      { { 1, 221 }, { 12, 0 }, { 246, 159 }, { 0, 2 }, { 0, 3 }, 12 },
      { { 1, 0 }, { 0, 0 }, { 250, 242 }, { 124, 4 }, { 0, 0 }, 0 },
      { { 12, 18 }, { 0, 0 }, { 246, 203 }, { 2, 67 }, { 0, 2 }, 10 },
      { { 12, 18 }, { 0, 0 }, { 246, 203 }, { 2, 19 }, { 0, 2 }, 10 },
      { { 14, 7 }, { 6, 68 }, { 248, 244 }, { 66, 228 }, { 3, 3 }, 14 },
      { { 14, 0 }, { 64, 8 }, { 150, 183 }, { 79, 24 }, { 0, 2 }, 14 },
      { { 1, 221 }, { 0, 0 }, { 246, 159 }, { 0, 2 }, { 2, 3 }, 12 },
      { { 2, 9 }, { 27, 0 }, { 245, 246 }, { 118, 214 }, { 2, 0 }, 4 },
      { { 0, 223 }, { 9, 0 }, { 246, 147 }, { 0, 67 }, { 0, 2 }, 14 },
      { { 128, 144 }, { 13, 0 }, { 248, 159 }, { 0, 4 }, { 2, 3 }, 14 },
      { { 12, 18 }, { 0, 0 }, { 246, 203 }, { 2, 67 }, { 0, 2 }, 10 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 1, 2 }, { 84, 0 }, { 250, 248 }, { 141, 184 }, { 0, 0 }, 6 },
      { { 1, 2 }, { 84, 0 }, { 250, 248 }, { 141, 184 }, { 0, 0 }, 6 },
      { { 1, 2 }, { 84, 0 }, { 250, 248 }, { 141, 184 }, { 0, 0 }, 6 },
      { { 2, 4 }, { 0, 0 }, { 250, 200 }, { 191, 151 }, { 0, 0 }, 11 },
      { { 2, 4 }, { 0, 0 }, { 250, 200 }, { 191, 151 }, { 0, 0 }, 11 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 14, 0 }, { 64, 8 }, { 118, 119 }, { 79, 24 }, { 0, 2 }, 14 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 128, 17 }, { 0, 0 }, { 255, 111 }, { 6, 22 }, { 3, 0 }, 14 },
      { { 128, 17 }, { 0, 0 }, { 255, 79 }, { 6, 22 }, { 3, 0 }, 14 },
      { { 6, 21 }, { 63, 0 }, { 0, 247 }, { 244, 245 }, { 0, 0 }, 1 },
      { { 6, 21 }, { 63, 0 }, { 0, 247 }, { 244, 245 }, { 0, 0 }, 1 },
      { { 6, 21 }, { 63, 0 }, { 0, 247 }, { 244, 245 }, { 0, 0 }, 1 },
      { { 65, 66 }, { 69, 0 }, { 252, 105 }, { 69, 5 }, { 0, 0 }, 0 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 23, 2 }, { 79, 16 }, { 242, 242 }, { 96, 114 }, { 0, 0 }, 8 },
      { { 14, 0 }, { 64, 8 }, { 118, 119 }, { 79, 24 }, { 0, 2 }, 14 },
      { { 133, 132 }, { 5, 64 }, { 249, 214 }, { 50, 165 }, { 3, 0 }, 14 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 12, 18 }, { 0, 0 }, { 246, 203 }, { 2, 19 }, { 0, 2 }, 10 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 },
      { { 33, 17 }, { 17, 0 }, { 163, 196 }, { 67, 34 }, { 2, 0 }, 13 }
   };
