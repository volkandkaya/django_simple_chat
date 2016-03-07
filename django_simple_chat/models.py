# -*- coding: utf-8 -*-
from __future__ import unicode_literals, absolute_import

from django.core.urlresolvers import reverse
from django.conf import settings
from django.db import models
from django.utils.translation import ugettext_lazy as _
from django.utils import timezone


class Contact(models.Model):
    messenger = models.ForeignKey(settings.AUTH_USER_MODEL, related_name="messenger")
    receiver = models.ForeignKey(settings.AUTH_USER_MODEL, related_name="receiver")
    deleted = models.IntegerField(_("Deleted"), default=0)
    blocked = models.IntegerField(_("Blocked"), default=0)
    unread = models.IntegerField(_("Unread"), default=0)

    def get_absolute_url(self):
        return reverse('users:detail', kwargs={'username': self.username})


class Message(models.Model):
    messenger = models.ForeignKey(settings.AUTH_USER_MODEL, related_name="message_messenger")
    receiver = models.ForeignKey(settings.AUTH_USER_MODEL, related_name="message_receiver")
    message = models.TextField(_("Message"), blank=True)
    time_sent = models.DateTimeField(default=timezone.now)
    time_read = models.DateTimeField(blank=True, null=True)

    def __str__(self):
        return self.message


class Report(models.Model):
    reporter = models.ForeignKey(settings.AUTH_USER_MODEL, related_name="reporter")
    reported = models.ForeignKey(settings.AUTH_USER_MODEL, related_name="reported")
    time_sent = models.DateTimeField(default=timezone.now)
    messsage = models.TextField(_("Message"), blank=True)
