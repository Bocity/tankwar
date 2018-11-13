//
// Created by 郝进 on 2018/1/7.
//

#ifndef TANK_GAMEMAP_H
#define TANK_GAMEMAP_H


class gameMap {
public:
    int a[16][16];
    bool vis[16][16];
    int x1,y1,x2,y2;
    void goMap();
    bool check();
    bool dfs(int i,int j,int ii,int jj);
    int f1[10] = {-1,1,0,0};
    int f2[10] = {0,0,-1,1};
};


#endif //TANK_GAMEMAP_H
