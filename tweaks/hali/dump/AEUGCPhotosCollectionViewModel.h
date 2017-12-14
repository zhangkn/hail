//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryChangeObserver.h"

@class NSArray, NSMutableArray, NSString, PHAssetCollection, PHFetchResult;

@interface AEUGCPhotosCollectionViewModel : NSObject <PHPhotoLibraryChangeObserver>
{
    NSMutableArray *_albumTitles;	// 8 = 0x8
    _Bool _isAllPhotosAlbum;	// 16 = 0x10
    PHAssetCollection *_selectedAlbum;	// 24 = 0x18
    PHFetchResult *_fetchResult;	// 32 = 0x20
    NSArray *_albums;	// 40 = 0x28
    id <AEUGCPhotosCollectionViewModelDelegate> _delegate;	// 48 = 0x30
}

@property(nonatomic) __weak id <AEUGCPhotosCollectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isAllPhotosAlbum; // @synthesize isAllPhotosAlbum=_isAllPhotosAlbum;
@property(retain, nonatomic) NSArray *albums; // @synthesize albums=_albums;
- (void).cxx_destruct;	// IMP=0x00000001007a0e1c
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x00000001007a0b48
- (id)albumsLocalizedTitles;	// IMP=0x00000001007a0b38
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) PHAssetCollection *selectedAlbum; // @synthesize selectedAlbum=_selectedAlbum;
- (void)generateAlbums;	// IMP=0x00000001007a072c
- (void)updateFetchResult;	// IMP=0x00000001007a0580
- (void)dealloc;	// IMP=0x00000001007a0504
- (id)init;	// IMP=0x00000001007a03fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

