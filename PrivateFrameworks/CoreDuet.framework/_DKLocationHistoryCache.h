/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKLocationHistoryCache : NSObject {
    double  _earliestTime;
    unsigned int  _index;
    double  _latestTime;
    BOOL  _needsSorting;
    NSMutableSet * _visitSet;
    NSMutableArray * _visits;
}

@property (readonly) unsigned int count;
@property (readonly) NSDate *newestExitDate;
@property (readonly) NSDate *oldestEntryDate;

- (void).cxx_destruct;
- (void)addVisitWithEntryDate:(id)arg1 exitDate:(id)arg2 locationId:(id)arg3;
- (void)clear;
- (void)clearOldest:(unsigned int)arg1;
- (unsigned int)count;
- (id)init;
- (id)lookupLocationIdforDate:(id)arg1;
- (id)newestExitDate;
- (id)oldestEntryDate;
- (void)sortIfNecessary;

@end
