//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WVAppIconWindow;

@interface WVExposeCluster : NSObject
{
    struct CGRect *_rects;
    NSMutableArray *_windows;
    NSMutableArray *_cells;
    unsigned int _cid;
    WVAppIconWindow *_appIconWindow;
}

@property(retain, nonatomic) WVAppIconWindow *appIconWindow; // @synthesize appIconWindow=_appIconWindow;
@property(nonatomic) struct CGRect *rects; // @synthesize rects=_rects;
@property(readonly, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(readonly, nonatomic) NSMutableArray *windows; // @synthesize windows=_windows;
@property(readonly, nonatomic) unsigned int cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCID:(unsigned int)arg1;

@end
