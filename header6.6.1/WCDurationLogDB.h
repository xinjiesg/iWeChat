//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString, WCTDatabase, WCTTable;

@interface WCDurationLogDB : MMObject
{
    NSString *_filePath;
    WCTDatabase *_dataBase;
    WCTTable *_table;
}

@property(retain, nonatomic) WCTTable *table; // @synthesize table=_table;
@property(retain, nonatomic) WCTDatabase *dataBase; // @synthesize dataBase=_dataBase;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)close;
- (_Bool)deleteAllItems;
- (id)getAllItems;
- (_Bool)insertItem:(id)arg1;

@end
