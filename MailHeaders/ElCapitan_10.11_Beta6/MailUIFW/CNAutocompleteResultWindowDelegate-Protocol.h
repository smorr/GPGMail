/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol CNAutocompleteResultWindowDelegate <NSObject>

@optional
- (id)iconTypeForResult:(id)arg1 selected:(BOOL)arg2;
- (id)addressStringForResult:(id)arg1;
- (id)accountStringForResult:(id)arg1;
- (void)didSelectResult:(id)arg1;
- (id)headerForNilPrefixResults;
- (id)currentPrefix;
- (id)viewForResult:(id)arg1;
- (void)selectionDidChange:(id)arg1;
- (void)selectedResult:(id)arg1;
@end
