#!/bin/bash
#SBATCH --job-name=mpi_trap_tree
#SBATCH --output=saida4.out
#SBATCH --error=erro4.err
#SBATCH --nodes=2
#SBATCH --ntasks-per-node=16
#SBATCH --cpus-per-task=1
#SBATCH --time=0-0:5
mpicc -Wall -g -o mpi_trap4 mpi_trap4.c
srun -n 1 ./mpi_trap4

