//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ECEvent, NSString;

@protocol DOCKStackActionHandling <NSObject>
- (BOOL)performStackActionAtIndex:(unsigned long long)arg1 withEvent:(ECEvent *)arg2 sender:(id <DOCKStackActionSender>)arg3;

@optional
- (void)showStackAsMenu:(BOOL)arg1;
- (void)stackDidClose;
- (BOOL)prepareForStackDrag:(struct OpaqueCoreDrag *)arg1 atIndex:(unsigned long long)arg2 sender:(id <DOCKStackActionSender>)arg3;
- (void)endStackTypeAhead;
- (unsigned long long)indexForStackTypeAhead:(NSString *)arg1;
- (void)beginStackTypeAhead:(id <DOCKStackActionSender>)arg1;
@end
