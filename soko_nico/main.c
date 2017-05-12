#include "sokoban.h"
#include <stdio.h>


int main(int argc, char ** argv) {

	Position position;

	Grille initiale = {

 "#.........#......#.....#",
 "##.....O###............#",
 "###.............O#.....#",
 "####.............#O....#",
 "##################.....#",
 "####.............#.....#",
 "###...............O..###",
 "##...........#########o#",
 "#...S................oo#",
 "#.....................o#",
 "########################"
};
	Grille nouvelle;
	
/*	position = getSokoban(initiale);
	printf("Voici ma position : { %d, %d }\n", position.colonne, position.ligne);
	if(position.colonne == 0 && position.ligne == 0) {
		error(NO_SOKOBAN);
	}
	else {

		afficheGrille(initiale);
	}

*/
	printf("\n#########################################################\nNouvelle grille :\n");
	nouveauJeu(initiale, nouvelle);
	afficheGrille(initiale);
	
	

	return 0;
}

