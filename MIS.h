//
// Created by jharo on 6/24/2019.
//
#pragma once
#ifndef TP_PAA_MIS_H
#define TP_PAA_MIS_H
#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
#include <unordered_set>
#include <algorithm>
#include <chrono>
#include <cmath>


//#define DEBUG
//#define INDEPENDENTE
//#define CLIQUE
//#define SAT

using namespace std;
using namespace chrono;

vector<pair<int,unordered_set<int>>> loadGraph(const string& arquivo="input.txt"); // Grafo de Conjunto independente
vector<pair<int,unordered_set<int>>> loadGraphComplemento(const string& arquivo="input.txt"); // Grafo de clique
vector<pair<int,unordered_set<int>>> generateSat(const string& arquivo="input.txt"); // Grafo de 3-Sat
int maximumIndependent( unordered_set<int>, unordered_set<int>,int);
int MIS(const int& bi);
bool check();
int greedy(vector<unordered_set<int>> );
int countEdge( unordered_set<int>const& );
void generateComplementoTxt();
int teste(int n, int m);
int findMSI(); // CHAMA APENAS ESSA FUNCAO PARA RESOLVER O PROBLEMA QUE VAI ESTAR EM input.txt


#endif //TP_PAA_MIS_H
