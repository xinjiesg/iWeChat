//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "WAMapViewDelegate-Protocol.h"

@class NSString;

@interface WAWebViewPlugin_EmbedMap : WAWebViewPlugin_embedView <WAMapViewDelegate>
{
}

- (void)onMapCalloutClick:(id)arg1 data:(id)arg2;
- (void)onMapTap:(id)arg1;
- (void)onRegionDidChange:(id)arg1;
- (void)onRegionWillChange:(id)arg1;
- (void)onControlClick:(id)arg1 data:(id)arg2;
- (void)onMarkerClick:(id)arg1 data:(id)arg2;
- (_Bool)removeMap:(unsigned int)arg1;
- (id)getMapView:(unsigned int)arg1;
- (_Bool)insertMap:(id)arg1 result:(id *)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
