#include "hashmap.h"


/*allocates a new Hashmap with the specified number of buckets
contains num_buckets and num_elements*/
struct hashmap* hm_create(int num_buckets){
    struct hashmap *hm;
    hm = (struct hashmap*)malloc(sizeof(struct hashmap));
    //assigning space for each map in hm
    hm->map = (struct llnode**)malloc(sizeof(struct llnode*)*num_buckets);
    for(int i=0; i<num_buckets; i++){
        hm->map[i] = (struct llnode*)malloc(sizeof(struct llnode));
    }
    //assigning value to num_buckets and num_elements
    hm->num_buckets = num_buckets;
    hm->num_elements = 0;

    return hm;
}
/*will return the value associated with the key passed in
*if element not found it returns -1*/
int hm_get(struct hashmap* hm, char* word, char* document_id){
    //check for invalid parameters
    if(hm == NULL){
        return NULL;
    }
    
    return -1;
}
/*puts the key value pair into the Hashmap
*if the word and document id already exists
value is overwritten*/
void hm_put(struct hashmap* hm, char* word, char* document_id, int num_occurrences){

}
/*will remove the key value pair in the Hashmap associated with
that key*/
void hm_destroy(struct hashmap* hm){

}
/*will take a given work and document id and map them
to a bucket in Hashmap
*sum the ASCII codes of all chars and module by numBuckets*/
int hash(struct hashmap* hm, char* word, char* document_id){

}
