/**
 * @file cliente_fifo.c
 * @brief Cliente CLI para la versión FIFO. Presenta el menú interactivo,
 *        envía las solicitudes y muestra los resultados devueltos.
 */

#include "common.h"

void print_menu(void) {
    printf("\n=== CONSULTA DE MUSICA SPOTIFY (IPC - FIFO) ===\n");
    printf("1. Buscar canciones por Artista\n");
    printf("2. Buscar canciones por Género\n");
    printf("3. Buscar canción por Track ID\n");
    printf("4. Salir\n");
    printf("Seleccione una opción: ");
}

void print_record(const TrackRecord *tr) {
    printf("--------------------------------------------------\n");
    printf(" ID:           %s\n", tr->track_id);
    printf(" Título:       %s\n", tr->track_title);
    printf(" Artista:      %s\n", tr->artist_name);
    printf(" Género:       %s\n", tr->genre);
    printf(" Lanzamiento:  %s\n", tr->release_date);
    printf(" Explícita:    %s\n", tr->is_explicit ? "Sí" : "No");
    printf(" Duración:     %.2f s\n", tr->duration_ms / 1000.0);
}
int main(void) {
    return 0;
}