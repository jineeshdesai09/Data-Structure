// MusicPlaylist
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Song
{
    char name[100];
    struct Song *lptr;
    struct Song *rptr;
};
struct Song *l = NULL;
struct Song *r = NULL;
struct Song *current = NULL;

// Create a new song node
struct Song *createSong(char *name)
{
    struct Song *newNode = (struct Song *)malloc(sizeof(struct Song));
    strcpy(newNode->name, name);
    newNode->lptr = NULL;
    newNode->rptr = NULL;
    return newNode;
}
// Add a song to the end of the playlist
void addSong(char *name)
{
    struct Song *newNode = createSong(name);
    if (l == NULL)
    {
        l = r = current = newNode;
    }
    else
    {
        r->rptr = newNode;
        newNode->lptr = r;
        r = newNode;
    }
    printf("Song \"%s\" added to the playlist.\n", name);
}

// Play next song
void playNext()
{
    if (current == NULL)
    {
        printf("Playlist is empty.\n");
    }
    else if (current->rptr == NULL)
    {
        printf("You are at the last song: \"%s\"\n", current->name);
    }
    else
    {
        current = current->rptr;
        printf("Playing next song: \"%s\"\n", current->name);
    }
}
// Play previous song
void playPrevious()
{
    if (current == NULL)
    {
        printf("Playlist is empty.\n");
    }
    else if (current->lptr == NULL)
    {
        printf("You are at the first song: \"%s\"\n", current->name);
    }
    else
    {
        current = current->lptr;
        printf("Playing previous song: \"%s\"\n", current->name);
    }
}
// Display the full playlist
void displayPlaylist()
{
    if (l == NULL)
    {
        printf("Playlist is empty.\n");
        return;
    }
    struct Song *save = l;
    printf("Playlist:\n");
    while (save != NULL)
    {
        if (save == current)
            printf("-> [%s] (current)\n", save->name);
        else
            printf(" %s\n", save->name);
        save = save->rptr;
    }
}

// Delete a song by name
void deleteSong(char *name)
{
    if (l == NULL)
    {
        printf("Playlist is empty.\n");
        return;
    }
    struct Song *save = l;
    while (save != NULL && strcmp(save->name, name) != 0)
    {
        save = save->rptr;
    }
    if (save == NULL)
    {
        printf("Song \"%s\" not found in playlist.\n", name);
        return;
    }
    if (save == l)
    {
        l = l->rptr;
        if (l)
            l->lptr = NULL;
        if (current == save)
            current = l;
    }
    else if (save == r)
    {
        r = r->lptr;
        r->rptr = NULL;
        if (current == save)
            current = r;
    }
    else
    {
        save->lptr->rptr = save->rptr;
        save->rptr->lptr = save->lptr;
        if (current == save)
            current = save->rptr;
    }
    free(save);
    printf("Song \"%s\" deleted from playlist.\n", name);
    if (l == NULL)
    {
        current = NULL;
        r = NULL;
    }
}

int main()
{
    int choice;
    char name[100];
    printf("\n--- Music Player ---\n");
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add song to playlist\n");
        printf("2. Play next song\n");
        printf("3. Play previous song\n");
        printf("4. Delete song by name\n");
        printf("5. Display playlist\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter song name: ");
            scanf(" %[^\n]", name); // Read until newline
            addSong(name);
            break;
        case 2:
            playNext();
            break;
        case 3:
            playPrevious();
            break;
        case 4:
            printf("Enter song name to delete: ");
            scanf(" %[^\n]", name);
            deleteSong(name);
            break;
        case 5:
            displayPlaylist();
            break;
        case 6:
            printf("Exiting music player.\n");
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}