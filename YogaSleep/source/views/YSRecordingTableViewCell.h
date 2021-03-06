//
//  YSRecordingTableViewCell.h
//
//  Copyright Trollwerks Inc 2010. All rights reserved.
//

enum
{
   kCellNameSize = 15,
   kCellNameStandardWidth = 158,
   kCellNameEditingWidth = 100,
   kStandardCellHeight = 44,
   kExtraLineHeight = 20,
};

@interface YSRecordingTableViewCell : UITableViewCell
{
	//IBOutlet UILabel *headlineLabel;
	//IBOutlet UILabel *detailLabel;
	//IBOutlet UIImageView *typeImage;
	IBOutlet UILabel *nameLabel;
	IBOutlet UILabel *timeLabel;
	IBOutlet UILabel *categoryLabel;
   
   UIColor *textColor;
   
   NSString *trackID;
}

+ (UIColor *)greenSelectedColor;
 
//@property (nonatomic, retain) IBOutlet UILabel *headlineLabel;
//@property (nonatomic, retain) IBOutlet UILabel *detailLabel;
//@property (nonatomic, retain) IBOutlet UIImageView *typeImage;
@property (nonatomic, retain) IBOutlet UILabel *nameLabel;
@property (nonatomic, retain) IBOutlet UILabel *timeLabel;
@property (nonatomic, retain) IBOutlet UILabel *categoryLabel;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *trackID;

- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)dealloc;

- (void)animateAdd;
- (void)phase1AnimationDidStop:(NSString *)animationID finished:(NSNumber *)finished context:(void *)context;

- (void)setStringsColor:(UIColor *)color;

//- (void)fillOutWith:(NSDictionary *)eventInfo andImage:(UIImage *)image;
- (void)fixNumberOfLines;
//- (void)fillOutWithPlaylist:(NSInteger)idx;
- (void)fillOutWithPlaylist:(NSDictionary *)playlist;
//- (void)fillOutWithDataModelTrack:(NSInteger)idx;
- (void)fillOutWithTrack:(NSInteger)idx fromPlaylist:(NSDictionary *)playlist;
- (void)fillOutWithTrackDictionary:(NSDictionary *)track;

@end
