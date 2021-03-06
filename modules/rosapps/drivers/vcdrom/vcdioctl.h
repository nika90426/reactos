#define IOCTL_VCDROM_BASE 0x2
#define IOCTL_VCDROM_CREATE_DRIVE CTL_CODE(IOCTL_VCDROM_BASE, 0xCC0, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_VCDROM_DELETE_DRIVE CTL_CODE(IOCTL_VCDROM_BASE, 0xCC1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_VCDROM_MOUNT_IMAGE  CTL_CODE(IOCTL_VCDROM_BASE, 0xCC2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_VCDROM_ENUMERATE_DRIVES CTL_CODE(IOCTL_VCDROM_BASE, 0xCC3, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_VCDROM_GET_IMAGE_PATH CTL_CODE(IOCTL_VCDROM_BASE, 0xCC4, METHOD_BUFFERED, FILE_ANY_ACCESS)

typedef struct _MOUNT_PARAMETERS
{
    WCHAR Path[255];
    USHORT Length;
    ULONG Flags;
} MOUNT_PARAMETERS, *PMOUNT_PARAMETERS;

#define MOUNT_FLAG_SUPP_UDF    0x1
#define MOUNT_FLAG_SUPP_JOLIET 0x2

typedef struct _DRIVES_LIST
{
    USHORT Count;
    WCHAR Drives[26];
} DRIVES_LIST, *PDRIVES_LIST;

typedef struct _IMAGE_PATH
{
    WCHAR Path[255];
    USHORT Length;
    USHORT Mounted;
} IMAGE_PATH, *PIMAGE_PATH;
