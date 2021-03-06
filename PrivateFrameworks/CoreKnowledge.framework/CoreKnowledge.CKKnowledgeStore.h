/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKKnowledgeStore : NSObject {
    void data;
    void delegate;
    void location;
    void name;
    void path;
}

@property (nonatomic, retain) <_TtP13CoreKnowledge24CKKnowledgeStoreDelegate_> *delegate;
@property (nonatomic, readonly) int hash;
@property (nonatomic, readonly) int hashValue;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;

+ (id)defaultKnowledgeStore;
+ (id)inMemoryKnowledgeStore;
+ (id)knowledgeStoreWithName:(id)arg1;
+ (id)userDefaultsKnowledgeStore;

- (id /* block */).cxx_destruct;
- (id)delegate;
- (BOOL)dropLinks:(id)arg1 error:(id*)arg2;
- (void)dropLinksFrom:(id)arg1 to:(id)arg2 ignoreWeights:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (BOOL)dropLinksFrom:(id)arg1 to:(id)arg2 withPredicate:(id)arg3 ignoreWeights:(BOOL)arg4 error:(id*)arg5;
- (void)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 error:(id*)arg3;
- (id)entitiesAndReturnError:(id*)arg1;
- (id)entityWithIdentifier:(id)arg1;
- (BOOL)evaluateJSONLDEntryForEntity:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id*)arg4;
- (int)hash;
- (/* Warning: Unrecognized filer type: 'Ã' using 'void*' */ void*)hashValue;
- (void)importContentsOfJSONLDAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)importJSONLDWithData:(id)arg1 error:(id*)arg2;
- (BOOL)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id*)arg4;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)keys;
- (void)linksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)linksWithBetween:(id)arg1 and:(id)arg2 error:(id*)arg3;
- (id)name;
/* MISSING HEADER DESCRIPTION FOR METHOD objectForKeyedSubscript: */
- (id)path;
- (BOOL)removeEntity:(id)arg1 error:(id*)arg2;
- (/* Warning: Unrecognized filer type: 'm' using 'void*' */ void*)removeObjectForKey:(in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*)arg1 error:(short)arg2;
- (void)setDelegate:(id)arg1;
/* MISSING HEADER DESCRIPTION FOR METHOD setObject:forKeyedSubscript: */
- (id)subgraphWithEntities:(id)arg1;
- (void)triplesMatching:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)triplesMatching:(id)arg1 error:(id*)arg2;
- (BOOL)wipeAndReturnError:(id*)arg1;
- (id)writeBatch;

@end
