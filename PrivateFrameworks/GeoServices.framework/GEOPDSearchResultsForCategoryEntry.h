/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchResultsForCategoryEntry : PBCodable <NSCopying> {
    GEOPDBrowseCategory * _category;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _placeIndexs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDBrowseCategory *category;
@property (nonatomic, readonly) BOOL hasCategory;
@property (nonatomic, readonly) unsigned int*placeIndexs;
@property (nonatomic, readonly) unsigned int placeIndexsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void)addPlaceIndex:(unsigned int)arg1;
- (id)category;
- (void)clearPlaceIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCategory;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)placeIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)placeIndexs;
- (unsigned int)placeIndexsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setPlaceIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
