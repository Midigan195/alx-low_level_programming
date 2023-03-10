#!/bin/bash
gcc $(ls *c) -c ; ar rc liball.a $(ls *c)
