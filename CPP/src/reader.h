/* File: reader.h
 *
 * Provides functions for reading text-based data sets, namely reading a
 * document file and an associated vocabulary file.
 */

#ifndef READER_H
#define READER_H


/* Read the document data file into a spare matrix (2D array) format).
 * This function assumes that the given file name is valid.
 * Returns the 2D array (sparse matrix) - columns are document vectors.
 * FILE FORMAT:
 *  <top of file>
 *      number of documents
 *      number of unique words
 *      number of non-zero words in the collection
 *      docID wordID count
 *      docID wordID count
 *      ...
 *  <end of file>
 * PARAMETERS:
 *  fname    - Name of the file.
 *  dc       - Integer to be filled in with the number of documents.
 *  wc       - Integer to be filled in with the number of words.
 *  non_zero - Integer to be filled in with the number of non-zeor entries.
 * RETURNS:
 *  A 2D float array (matrix) representing the document matrix D.
 */
float** readDocFile(const char *fname, int *dc, int *wc, int *non_zero);


// Read the word data into a list. Words are just organized one word per line.
// Returns a list of strings (char pointers), or a null pointer if the given
// file name does not exist.
char** readWordsFile(const char *fname, int wc);


#endif
