# Composers-DB
C++ - CIS22B A6

This is a multi-file project in which I have templated linked list and use it to create a simple list of composeres from a text file with the required details, and then allows me to perofom operations like searching, removing and displaying composers from the list.

```
Sample Output:
Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: d

Claudio Monteverdi - 1643
Henry Purcell - 1695
Antonio Vivaldi - 1741
Johann Sebastian Bach - 1750
George Frideric Handel - 1759
Wolfgang Amadeus Mozart - 1791
Joseph Haydn - 1809
Ludwig van Beethoven - 1827
Franz Schubert - 1828
Felix Mendelssohn - 1847
Frederic Chopin - 1849
Robert Schumann - 1856
Hector Berlioz - 1869
Richard Wagner - 1883
Franz Liszt - 1886
Pyotr Ilyich Tchaikovsky - 1893
Johannes Brahms - 1897
Giuseppe Verdi - 1901
Antonin Dvorak - 1904
Edvard Grieg - 1907
Gustav Mahler - 1911
Claude Debussy - 1918
Camille Saint-Saens - 1921
Giacomo Puccini - 1924
George Gershwin - 1937
Maurice Ravel - 1937
Sergei Rachmaninoff - 1943
Bela Bartok - 1945
Arnold Schoenberg - 1951
Sergei Prokofiev - 1953
Igor Stravinsky - 1971
Dmitri Shostakovich - 1975
Leonard Bernstein - 1990
Aaron Copland - 1990

Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: s
Enter a composer's name to search for: Franz Liszt
Franz Liszt was found in the list
Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: s
Enter a composer's name to search for: Hanz Zimmer
Hanz Zimmer was not found in the list
Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: r
Enter a composer's name to remove: Camille Saint-Saens
Camille Saint-Saens was successfully removed from the list
Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: r
Enter a composer's name to remove: CPE Bach
CPE Bach was not found in the list when attempting to remove
Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: d

Claudio Monteverdi - 1643
Henry Purcell - 1695
Antonio Vivaldi - 1741
Johann Sebastian Bach - 1750
George Frideric Handel - 1759
Wolfgang Amadeus Mozart - 1791
Joseph Haydn - 1809
Ludwig van Beethoven - 1827
Franz Schubert - 1828
Felix Mendelssohn - 1847
Frederic Chopin - 1849
Robert Schumann - 1856
Hector Berlioz - 1869
Richard Wagner - 1883
Franz Liszt - 1886
Pyotr Ilyich Tchaikovsky - 1893
Johannes Brahms - 1897
Giuseppe Verdi - 1901
Antonin Dvorak - 1904
Edvard Grieg - 1907
Gustav Mahler - 1911
Claude Debussy - 1918
Giacomo Puccini - 1924
George Gershwin - 1937
Maurice Ravel - 1937
Sergei Rachmaninoff - 1943
Bela Bartok - 1945
Arnold Schoenberg - 1951
Sergei Prokofiev - 1953
Igor Stravinsky - 1971
Dmitri Shostakovich - 1975
Leonard Bernstein - 1990
Aaron Copland - 1990

Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: r
Enter a composer's name to remove: Aaron Copland
Aaron Copland was successfully removed from the list
Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: d

Claudio Monteverdi - 1643
Henry Purcell - 1695
Antonio Vivaldi - 1741
Johann Sebastian Bach - 1750
George Frideric Handel - 1759
Wolfgang Amadeus Mozart - 1791
Joseph Haydn - 1809
Ludwig van Beethoven - 1827
Franz Schubert - 1828
Felix Mendelssohn - 1847
Frederic Chopin - 1849
Robert Schumann - 1856
Hector Berlioz - 1869
Richard Wagner - 1883
Franz Liszt - 1886
Pyotr Ilyich Tchaikovsky - 1893
Johannes Brahms - 1897
Giuseppe Verdi - 1901
Antonin Dvorak - 1904
Edvard Grieg - 1907
Gustav Mahler - 1911
Claude Debussy - 1918
Giacomo Puccini - 1924
George Gershwin - 1937
Maurice Ravel - 1937
Sergei Rachmaninoff - 1943
Bela Bartok - 1945
Arnold Schoenberg - 1951
Sergei Prokofiev - 1953
Igor Stravinsky - 1971
Dmitri Shostakovich - 1975
Leonard Bernstein - 1990

Enter 's' to search, 'r' to remove, 'd' to display, or 'e' to exit: e
```
