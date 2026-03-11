# Pointers and References

## Pointer sizes 
- depend on the machine architecture:
    - on 32-bit systems, they are 4 bytes; 
    - on 64-bit systems, they are 8 bytes.
- _console.inform(to_string(sizeof(int*)));

## Use reference members if:
- The object must exist
- You don’t want to deal with null
- Lifetime and ownership check if at COMPILE TIME.

## Use pointer members if:
- The object might be optional
- You might swap the object later
- can be used or not at RUN TIME.

## pointers syntax:

- *Licht pointer ;
- Licht led("rot);
- pointer = &led;

## references syntax:
- Licht led("rot);
- Licht& reference;