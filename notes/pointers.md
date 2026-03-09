pointers:
- memory eficiency
- shared state

Pointer sizes depend on the machine architecture. On 32-bit systems, they are 4 bytes; on 64-bit systems, they are 8 bytes.
_console.inform(to_string(sizeof(int*)));

Key rule:
- T& → pass a variable of type T.
- T* → pass a pointer (&variable).
- T** → pass a pointer to a pointer.