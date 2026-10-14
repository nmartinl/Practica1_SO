# Práctica 1: Procesos, llamadas al sistema e IPC en Linux
**Universidad Nacional de Colombia - Ingeniería de Sistemas**
**Asignatura:** Sistemas Operativos

---

## 1. Descripción del Dataset
Se utilizó el dataset de Spotify **`track_metadata.csv`**, el cual contiene registros de canciones estructurados en los siguientes campos:
- `track_id`: Código alfanumérico identificador de la canción.
- `track_title`: Título de la pista musical.
- `artist_name`: Nombre del artista o grupo.
- `genre`: Género musical asociado.
- `release_date`: Fecha de lanzamiento (AAAA-MM-DD).
- `is_explicit`: Indicador binario (1 si contiene lenguaje explícito, 0 en caso contrario).
- `duration_ms`: Duración de la canción en milisegundos.

---

## 2. Instrucciones de Compilación y Ejecución

### Compilación
Para compilar ambas versiones (FIFO y Memoria Compartida), ejecute en la terminal:
```bash
make