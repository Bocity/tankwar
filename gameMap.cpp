//
// Created by 郝进 on 2018/1/7.
//

#include <cstdlib>
#include <cstring>
#include "gameMap.h"

void gameMap::goMap() {
    memset(a,-1, sizeof(a));
    for(int i = 1; i < 8; ++i){
        for(int j = 1; j < 8 ; ++j){
            if ((i == x1 && j == y1)||(i == x2 && j == y2)){
                a[i][j] = 1;
                continue;
            }
            if (rand()%100 > 60){
                a[i][j] = -1;
            }else{
                a[i][j] = 1;
            }
        }

    }
}

bool gameMap::check() {
    memset(vis,0, sizeof(vis));
    if (x1 == x2 && y1 == y2) return false;
    return dfs(x1,y1,x2,y2);
}

bool gameMap::dfs(int i, int j,int ii,int jj) {
    vis[i][j] = true;
    bool flag = false;
    for(int i1 = 0;i1 < 4; ++i1){
        if (i + f1[i1] ==ii && j + f2[i1] == jj) return true;
        if (!vis[i + f1[i1]][j + f2[i1]] && a[i + f1[i1]][j + f2[i1]]!= -1)
        flag |= dfs(i + f1[i1],j+f2[i1],ii,jj);
    }
    return flag;
}
