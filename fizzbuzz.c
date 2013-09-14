  //© Copyright 2013 Adam, <gnulinuxorocks45 at myself.com>. All Rights Reserved.
  //This program is free software: you can redistribute it and/or modify
  // it under the terms of the GNU General Public License as published by
  // the Free Software Foundation, either version 3 of the License, or
  //  (at your option) any later version.
  //
  // This program is distributed in the hope that it will be useful,
  // but WITHOUT ANY WARRANTY; without even the implied warranty of
  // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  // GNU General Public License for more details.
  //
  // You should have received a copy of the GNU General Public License
  // along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <stdio.h>
#include <slurp.h>

int main() {

  int num;

  for(num=1;num!=100;num++) {
    if(num%15 == 0) {
      printf("ShitFuck.\n");
    } else if(num%5 == 0) {
      printf("Fuck.\n");
    } else if(num%3 == 0) {
      printf("Shit.\n");
    } else {
      printf("%i\n", num);
    }
  }
  return 0;
}
