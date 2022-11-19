//
// Created by fenris on 11/17/22.
//

#ifndef FENC_FENC_H
#define FENC_FENC_H

#include <cstdlib>


typedef struct {
    int i;
    char x;
} mapObj;


class fenc {

    mapObj *Map;
    Map = (mapObj *) malloc(48*sizeof(mapObj));


    Map[0] = {1, 'a'};

public:

    char encode(char a) {



        return a;
    }
    char decode(char a) {



        return a;
    }
};

#endif //FENC_FENC_H
